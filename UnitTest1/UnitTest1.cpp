#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"
#include <iostream>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(is_max) //sprawdzenie czy liczba z przedziału -1=< x =<1 jest max
		{
			Assert::AreEqual(max(-1,1,0), 1);
		}
		TEST_METHOD(is_min)//sprawdzenie czy liczba z przedziału -5=< x =<5 jest min
		{
			Assert::AreEqual(minimum, -1);
		}
		TEST_METHOD(is_positive) //sprawdzenie czy wybrana liczba z przedziału -5=< x =<5 jest dodatnia ( większa od 0)
		{
			Assert::IsTrue(positive(x), true);
		}
		
	};
}
