#include "pch.h"
#include "CppUnitTest.h"
#include "../ConverterProgram/ConvertAmericanToSi.h"
#include "../ConverterProgram/ConvertAmericanToSi.cpp"
#include "../ConverterProgram/ConvertRussianToSi.h"
#include "../ConverterProgram/ConvertRussianToSi.cpp"
#include "../ConverterProgram/ConvertAmericanToRussian.h"
#include "../ConverterProgram/ConvertAmericanToRussian.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ConverterUnitTest
{
	TEST_CLASS(ConvertAmericanToSiTest)
	{
	public:

		TEST_METHOD(CreateConvertAmericanToSiTest)
		{
			ConvertAmericanToSi* conv = new ConvertAmericanToSi();
			Assert::IsNotNull(conv);
		}
		TEST_METHOD(Inch1ToMetreTest)
		{
			double res = ConvertAmericanToSi::inchToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.025, res);
		}
		TEST_METHOD(Metre1ToInchTest)
		{
			double res = ConvertAmericanToSi::inchToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(39.37, res);
		}
		TEST_METHOD(Inch2_5ToMetreTest)
		{
			double res = ConvertAmericanToSi::inchToMetre(2.5, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.064, res);
		}
		TEST_METHOD(Metre2_5ToInchTest)
		{
			double res = ConvertAmericanToSi::inchToMetre(2.5, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(98.425, res);
		}
		TEST_METHOD(Foot1ToMetreTest)
		{
			double res = ConvertAmericanToSi::footToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.305, res);
		}
		TEST_METHOD(Foot3_6ToMetreTest)
		{
			double res = ConvertAmericanToSi::footToMetre(3.6, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(1.097, res);
		}
		TEST_METHOD(Metre1ToFootTest)
		{
			double res = ConvertAmericanToSi::footToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(3.281, res);
		}
		TEST_METHOD(Metre2_4ToFootTest)
		{
			double res = ConvertAmericanToSi::footToMetre(2.4, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(7.874, res);
		}
		TEST_METHOD(Yard1ToMetreTest)
		{
			double res = ConvertAmericanToSi::yardToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.914, res);
		}
		TEST_METHOD(Yard3_3ToMetreTest)
		{
			double res = ConvertAmericanToSi::yardToMetre(3.3, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(3.018, res);
		}
		TEST_METHOD(Metre1ToYardTest)
		{
			double res = ConvertAmericanToSi::yardToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(1.094, res);
		}
		TEST_METHOD(Metre1_9ToYardTest)
		{
			double res = ConvertAmericanToSi::yardToMetre(1.9, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.078, res);
		}
		TEST_METHOD(Mile1ToMetre)
		{
			double res = ConvertAmericanToSi::mileToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(1609.344, res);
		}
		TEST_METHOD(Mile0_005ToMetre)
		{
			double res = ConvertAmericanToSi::mileToMetre(0.005, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(8.047, res);
		}
		TEST_METHOD(Metre1ToMileTest)
		{
			double res = ConvertAmericanToSi::mileToMetre(1, false);
			res = round(res * 100000) / 100000; //округление до пятого знака после запятой

			Assert::AreEqual(0.00062, res);
		}
		TEST_METHOD(Metre209ToMileTest)
		{
			double res = ConvertAmericanToSi::mileToMetre(209, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.130, res);
		}
	};

	TEST_CLASS(ConvertRussianToSiTest)
	{
	public:

		TEST_METHOD(CreateConvertRussianToSiTest)
		{
			ConvertRussianToSi* conv = new ConvertRussianToSi();
			Assert::IsNotNull(conv);
		}
		TEST_METHOD(Arshin1ToMetreTest)
		{
			double res = ConvertRussianToSi::arshinToMetre(1, true);

			Assert::AreEqual(0.7112, res);
		}
		TEST_METHOD(Metre1ToArshinTest)
		{
			double res = ConvertRussianToSi::arshinToMetre(1, false);

			Assert::AreEqual(0.406, res);
		}
	};

	TEST_CLASS(ConvertAmericanToRussianTest)
	{
	public:

		TEST_METHOD(CreateConvertAmericanToRussianTest)
		{
			ConvertAmericanToRussian* conv = new ConvertAmericanToRussian();
			Assert::IsNotNull(conv);
		}
		TEST_METHOD(Inch1ToArshinTest)
		{
			double res = ConvertAmericanToRussian::inchToArshin(1, true);

			Assert::AreEqual(0.036, res);
		}
		TEST_METHOD(Arshin1ToInchTest)
		{
			double res = ConvertAmericanToRussian::inchToArshin(1, false);

			Assert::AreEqual(28.0, res);
		}
	};
}
