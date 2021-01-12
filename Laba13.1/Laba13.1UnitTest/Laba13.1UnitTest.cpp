#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba13.1/sum.h"
#include "../Laba13.1/sum.cpp"
using namespace nsSum;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba52UnitTest
{
	TEST_CLASS(Laba52UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double ecpected;
			double exp = 0;
			ecpected = sum();
			Assert::AreEqual(ecpected, exp, 0.00001);

		}
	};
}
