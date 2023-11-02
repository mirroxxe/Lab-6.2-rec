#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2 rec/Lab 6.2 rec.cpp"
#include <vector>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			std::vector<int> a = { 2, 4, 7, 1, 9, 6, 3 };

			int expectedCount = 4;  

			int result = countnumbers(a);  

			Assert::AreEqual(expectedCount, result);
		}
	};
}
