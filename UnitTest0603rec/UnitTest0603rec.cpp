#include "pch.h"
#include "CppUnitTest.h"
#include "../lab0603rec/lab0603rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0603rec
{
	TEST_CLASS(UnitTest0603rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { 1, 2, 3, 4, 5 };

			Inverse(a, n);

			Assert::AreEqual(5, a[0]);
			Assert::AreEqual(4, a[1]);
			Assert::AreEqual(3, a[2]);
			Assert::AreEqual(2, a[3]);
			Assert::AreEqual(1, a[4]);
		}
	};
}
