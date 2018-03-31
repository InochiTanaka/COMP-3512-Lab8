#include "CppUnitTest.h"
#include "../COMP 3512 Lab8/FixedList.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForFixedList
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test_get_inside_array)
		{
			FixedList<int, 3> testObj;

			int temp = 0;
			testObj.add(temp);

			temp = 1;
			testObj.add(temp);

			temp = 2;
			testObj.add(temp);

			Assert::AreEqual(2, testObj.get(2));
		}

		TEST_METHOD(FailTest_get_outside_array)
		{
			FixedList<int, 3> testObj;

			int temp = 0;
			testObj.add(temp);

			temp = 1;
			testObj.add(temp);

			temp = 2;
			testObj.add(temp);

			try
			{
				testObj.get(3);
				Assert::Fail();
			}
			catch (std::out_of_range)
			{
			}
		}

		TEST_METHOD(Test_get_inside_operator)
		{
			FixedList<int, 3> testObj;

			int temp = 0;
			testObj.add(temp);

			temp = 1;
			testObj.add(temp);

			temp = 2;
			testObj.add(temp);

			Assert::AreEqual(2, testObj.operator[](2));
		}

		TEST_METHOD(FailTest_get_outside_operator)
		{
			FixedList<int, 3> testObj;

			int temp = 0;
			testObj.add(temp);

			temp = 1;
			testObj.add(temp);

			temp = 2;
			testObj.add(temp);

			try
			{
				testObj.operator[](3);
				Assert::Fail();
			}
			catch (std::out_of_range)
			{
			}
		}

		TEST_METHOD(Test_get_firstIndex)
		{
			FixedList<int, 5> testObj;

			int temp = 0;
			testObj.add(temp);

			temp = 1;
			testObj.add(temp);

			temp = 2;
			testObj.add(temp);

			temp = 3;
			testObj.add(temp);

			temp = 4;
			testObj.add(temp);

			Assert::AreEqual(3, testObj.getFirstIndex(3));
			Assert::AreEqual(-1, testObj.getFirstIndex(5));
		}

		TEST_METHOD(Test_add_int)
		{		
			FixedList<int, 3> testObj;

			int temp = 1;
			Assert::IsTrue(testObj.add(temp));
		}

		TEST_METHOD(Test_add_double)
		{
			FixedList<double, 3> testObj;

			double temp = 0.1;
			Assert::IsTrue(testObj.add(temp));
		}

		TEST_METHOD(Test_add_char)
		{
			FixedList<char*, 3> testObj;

			char* temp{ "a" };
			Assert::IsTrue(testObj.add(temp));
		}

		TEST_METHOD(FailTest_add_more_than_capacity)
		{
			FixedList<int, 3> testObj;

			int temp = 0;
			testObj.add(temp);

			temp = 1;
			testObj.add(temp);

			temp = 2;
			testObj.add(temp);

			temp = 3;
			Assert::IsFalse(testObj.add(temp));
		}

		TEST_METHOD(Test_remove)
		{
			size_t tempSize, tempCap, curSize, curCap;

			FixedList<int, 3> testObj;
			FixedList<int, 3> testObj2;

			testObj.add(0);

			testObj.add(1);

			testObj.add(2);

			testObj.add(3);

			tempSize = testObj.size();
			tempCap = testObj.capacity();

			testObj.remove(2);

			curSize = testObj.size();
			curCap = testObj.capacity();

			Assert::AreEqual(curSize, tempSize-1);
			Assert::AreEqual(curCap, tempCap);

			testObj2.add(0);

			testObj2.add(1);

			testObj2.add(3);

			for (int i = 0; i < curSize; i++)
			{
				Assert::AreEqual(testObj.get(i), testObj2.get(i));
			}
		}

	};
}