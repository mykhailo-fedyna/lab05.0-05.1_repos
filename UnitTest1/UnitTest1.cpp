#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, 3, 4);
			Assert::AreEqual(t, 5, 7);

		}
	};
}
