#include "pch.h"
#include "CppUnitTest.h"
#include "../2.1/Cursor.h"
#include "../2.1/Cursor.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor c;
			Cursor::Cursor(100, 200);
			c.ChangeX(500);
			Assert::AreEqual(500, c.getFirst());
		}
	};
}
