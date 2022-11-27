#include <gtest/gtest.h>
#include <main.h>

TEST(voltage_reading, assert_true)
{
    ASSERT_EQ(2, 2);
}

TEST(voltage_reading, assert_false)
{
    ASSERT_NE(2, 3);
}

TEST(voltage_reading, t01_passed_one_value_recording)
{
    int32_t max = -1;
    int32_t min = -1;
    int32_t average = -1;
    MotorVoltageReading motor_reading;
    motor_reading.voltage_recording(2000);
    motor_reading.get_voltage_stats(&min, &max, &average);
    ASSERT_EQ(max, 2000);
    ASSERT_EQ(min, 2000);
    ASSERT_EQ(average, 2000);
}

TEST(voltage_reading, t02_passed_ten_value_recording)
{
    int32_t max = -1;
    int32_t min = -1;
    int32_t average = -1;
    MotorVoltageReading motor_reading;
    for (int i = 0; i < 10; i++)
    {
        motor_reading.voltage_recording(i * 1000);
    }
    motor_reading.get_voltage_stats(&min, &max, &average);
    ASSERT_EQ(max, 9000);
    ASSERT_EQ(min, 0);
    ASSERT_EQ(average, 4500);
}

TEST(voltage_reading, t03_overvoltage_reading_occured)
{
    int32_t max = -1;
    bool ret = false;
    MotorVoltageReading motor_reading;
    motor_reading.set_overvoltage_level(2000);
    motor_reading.voltage_recording(5000);
    ret = motor_reading.check_overvoltage(&max);
    ASSERT_TRUE(ret);
    ASSERT_EQ(max, 5000);
}

TEST(voltage_reading, t04_passed_overvoltage_reading_not_occured)
{
    int32_t max = -1;
    bool ret = false;
    MotorVoltageReading motor_reading;
    motor_reading.set_overvoltage_level(2000);
    motor_reading.voltage_recording(1000);
    ret = motor_reading.check_overvoltage(&max);
    ASSERT_FALSE(ret);
    ASSERT_EQ(max, -1);
}
