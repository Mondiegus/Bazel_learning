#include <gtest/gtest.h>
#include <01.h>
#include <02.h>
#include <03.h>
#include <04.h>
#include <05.h>
#include <06.h>

TEST(ch2, assert_true)
{
    ASSERT_EQ(2, 2);
}

TEST(ch2, assert_false)
{
    ASSERT_NE(2, 3);
}

TEST(ch2, t01_passed_defConstructor)
{
    Citizen citizen;
    ASSERT_EQ(citizen.getSurname(), "Kowalski");
    ASSERT_EQ(citizen.getAddress(), "nope");
}

TEST(ch2, t01_passed_customConstructor)
{
    Citizen citizen("aa", "bb");
    ASSERT_EQ(citizen.getSurname(), "aa");
    ASSERT_EQ(citizen.getAddress(), "bb");
}

TEST(ch2, t01_failed)
{
    Citizen citizen("aa", "bb");
    ASSERT_NE(citizen.getSurname(), "Kowalski");
    ASSERT_NE(citizen.getAddress(), "nope");
}

TEST(ch2, t02_passed_00)
{
    MilesToMetersConverter converter(1.f);
    double value = converter.getValueInMeters();
    ASSERT_EQ(value, 1852);
}

TEST(ch2, t02_passed_01)
{
    MilesToMetersConverter converter(0.1f);
    double value = converter.getValueInMeters();
    ASSERT_EQ(float(value), float(185.2)); // gtest have problems with double
}

TEST(ch2, t02_failed)
{
    MilesToMetersConverter converter(0.1);
    int value = converter.getValueInMeters();
    ASSERT_NE(value, 185.2);
}

TEST(ch2, t03_passed)
{
    Poem poem;
    ASSERT_EQ(poem.getFirstLine(), "Entliczek petliczek");
    ASSERT_EQ(poem.getSecondLine(), "Czerwony stoliczek");
}

TEST(ch2, t04_passed)
{
    TemperatureConversion temperatureConversion(20);
    ASSERT_EQ(temperatureConversion.getCelsiusDegree(), 20);
    temperatureConversion.convertTempToC();
    ASSERT_EQ(temperatureConversion.getKelvinDegree(), 68);
}

TEST(ch2, t04_failed)
{
    TemperatureConversion temperatureConversion(55);
    ASSERT_NE(temperatureConversion.getCelsiusDegree(), 20);
    temperatureConversion.convertTempToC();
    ASSERT_NE(temperatureConversion.getKelvinDegree(), 68);
}

TEST(ch2, t05_passed)
{
    LightYearsConverter lightYearsConverter(4.2);
    ASSERT_EQ(lightYearsConverter.getLightYears(), 4.2);
    lightYearsConverter.convertYearsToSpaceUnit();
    ASSERT_EQ(lightYearsConverter.getSpaceUnit(), 265608);
}

TEST(ch2, t05_failed)
{
    LightYearsConverter lightYearsConverter(1);
    ASSERT_NE(lightYearsConverter.getLightYears(), 20);
    lightYearsConverter.convertYearsToSpaceUnit();
    ASSERT_NE(lightYearsConverter.getSpaceUnit(), 68);
}

TEST(ch2, t06_passed)
{
    CustomClock customClock(1,1);
    ASSERT_EQ(customClock.getHours(), 1);
    ASSERT_EQ(customClock.getMinutes(), 1);
}

TEST(ch2, t06_failed)
{
    CustomClock customClock(2,2);
    ASSERT_NE(customClock.getHours(), 1);
    ASSERT_NE(customClock.getMinutes(), 1);
}
