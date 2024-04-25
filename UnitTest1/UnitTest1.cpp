#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_11_3/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestCalculateAverageGrade) {
            Student student;
            student.physics_grade = 80;
            student.math_grade = 85;
            student.additional_grade.programming = 90;
            student.specialization = COMPUTER_SCIENCE;

            double expected_average = (80 + 85 + 90) / 3.0;
            double actual_average = CalculateAverageGrade(student);

            Assert::AreEqual(expected_average, actual_average, L"Average grade calculation incorrect");
        }

    };
}