#include "main.h"

void BEGIN_CRITICAL_SECTION() {}

void END_CRITICAL_SECTION() {}

// This gets called when a new voltage has been sampled
void MotorVoltageReading::voltage_recording(int32_t voltage)
{
    BEGIN_CRITICAL_SECTION();
    average += voltage;
    check_max_values(voltage);
    check_min_value(voltage);
    registeredValues++;
    END_CRITICAL_SECTION();
}

/// Get statistics from the current period, and reset statics before next period
void MotorVoltageReading::get_voltage_stats(int32_t *min, int32_t *max, int32_t *average)
{
    *min = this->min;
    *max = this->max;
    *average = this->average / registeredValues;
    registeredValues = 0;
    this->average = 0;
    this->max = INT32_MIN;
    this->min = INT32_MAX;
}

/// Over-voltage alarm
/// Set the over voltage threshold, and clear the alarm
void MotorVoltageReading::set_overvoltage_level(int32_t threshold)
{
    this->threshold = threshold;
}

/// Check if over voltage has been detected
/// Returns true and reports the max voltage that was detected
/// Will also clear the alarm condition if alarm was triggered
bool MotorVoltageReading::check_overvoltage(int32_t *max)
{
    bool ret = false;
    if (gen_max > threshold)
    {
        ret = true;
        *max = gen_max;
        gen_max = INT32_MIN;
    }
    return ret;
}

void MotorVoltageReading::check_max_values(int32_t voltage)
{
    if (max < voltage)
    {
        max = voltage;
    }

    if (gen_max < voltage)
    {
        gen_max = voltage;
    }
}

void MotorVoltageReading::check_min_value(int32_t voltage)
{
    if (min > voltage)
    {
        min = voltage;
    }
}