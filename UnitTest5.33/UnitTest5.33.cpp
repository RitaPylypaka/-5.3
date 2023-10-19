#include "pch.h"
#include "CppUnitTest.h"
#include "../пр5.3/пр5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest533
{
	TEST_CLASS(UnitTest533)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = p(1);
			Assert::AreEqual(t,-0.236895 , 0.000001);
		}
	};
}
