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
		// a value is same as for 1 
		
		string a = ".----";
		string b = "..---";
		string c = "...--";
		string d = "....-";
		string e = ".....";
		string f = "-....";
		string g = "--...";
		string h = "---..";
		string i = "----.";
		string j = "-----";
		TEST_METHOD(porownaj1)
		{
			Assert::AreEqual(morseCode("1"), a);
		}
		TEST_METHOD(porownaj2)
		{
			Assert::AreEqual(morseCode("2"), b);
		}
		TEST_METHOD(porownaj3)
		{
			Assert::AreEqual(morseCode("3"), c);
		}
		TEST_METHOD(porownaj4)
		{
			Assert::AreEqual(morseCode("4"), d);
		}
		TEST_METHOD(porownaj5)
		{
			Assert::AreEqual(morseCode("5"), e);
		}
		TEST_METHOD(porownaj6)
		{
			Assert::AreEqual(morseCode("6"), f);
		}
		TEST_METHOD(porownaj7)
		{
			Assert::AreEqual(morseCode("7"), g);
		}
		TEST_METHOD(porownaj8)
		{
			Assert::AreEqual(morseCode("8"), h);
		}
		TEST_METHOD(porownaj9)
		{
			Assert::AreEqual(morseCode("9"), i);
		}
		TEST_METHOD(porownaj0)
		{
			Assert::AreEqual(morseCode("0"), j);
		}
		TEST_METHOD(porownajkombinacja)
		{
			Assert::AreEqual(morseCode("42"),d+b);
		}
		TEST_METHOD(zlyznak)
		{
		Assert::AreEqual(morseCode("u"),b); // wywo³anie b³êdu - obs³uga znaku z poza zakresu
		}
	};
}
