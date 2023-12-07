#pragma once
#include <cstdint>

class MotorVoltageReading
{
private:
    uint16_t registeredValues = 0;
    int32_t threshold = 0;
    int32_t gen_max = INT32_MIN;
    int32_t max = INT32_MIN;
    int32_t min = INT32_MAX;
    int32_t average = 0;
    bool alarm = false;
    
    void check_max_values(int32_t voltage);
    void check_min_value(int32_t voltage);

public:
    /// Get statistics from the current period, and reset statics before next period
    void get_voltage_stats(int32_t *min, int32_t *max, int32_t *average);

    /// Over-voltage alarm
    /// Set the over voltage threshold, and clear the alarm
    void set_overvoltage_level(int32_t threshold);

    /// Check if over voltage has been detected
    /// Returns true and reports the max voltage that was detected
    /// Will also clear the alarm condition if alarm was triggered
    bool check_overvoltage(int32_t *max);

    // This gets called when a new voltage has been sampled
    void voltage_recording(int32_t voltage);
};