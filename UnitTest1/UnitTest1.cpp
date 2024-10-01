#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.1/LR5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result;
			result = g(2, 3);
			double expected = sin(2.0 * 3.0) / (2.0 * 2.0 + 3.0 * 3.0);
			Assert::AreEqual(expected, result, 0.000001);
			
		}
	};
}
