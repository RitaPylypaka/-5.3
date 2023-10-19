#include "pch.h"
#include "CppUnitTest.h"
#include "../пр5.3/пр5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double m;
			m = p(1);
			Assert::AreEqual(m, -0.236895, 0.000001);
		}
	};
}
