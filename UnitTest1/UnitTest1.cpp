#include "pch.h"
#include "CppUnitTest.h"
#include "../CICDGroup2/CICDGroup2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Call TestCase with the appropriate input
			auto val = TestCase(5);

			// Assert that the returned value is equal to the expected value
			Assert::AreEqual(6, val);
		}
	};
}
