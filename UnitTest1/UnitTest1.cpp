#include "pch.h"
#include "CppUnitTest.h"
#include "../CI_CD_Assgmnt_Grp_35/CI_CD_Assgmnt_Grp_35.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			CCICDAssgmntGrp35 c1;
			Assert::AreEqual(25,c1.calc(5,5));
		}

		TEST_METHOD(TestMethod2)
		{
			CCICDAssgmntGrp35 c1;
			Assert::AreEqual(5, c1.calc(8,3));
		}

		TEST_METHOD(TestMethod3)
		{
			CCICDAssgmntGrp35 c1;
			Assert::AreEqual(11, c1.calc(3,8));
		}

		TEST_METHOD(TestMethod4)
		{
			CCICDAssgmntGrp35 c1;
			Assert::AreEqual(25, c1.calc(-5, -5));
		}

		TEST_METHOD(TestMethod5)
		{
			CCICDAssgmntGrp35 c1;
			Assert::AreEqual(4, c1.calc(7,3));
		}

	};
}
