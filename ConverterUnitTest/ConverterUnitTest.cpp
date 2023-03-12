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

			Assert::AreEqual(0.025, res);
		}
		TEST_METHOD(Metre1ToInchTest)
		{
			double res = ConvertAmericanToSi::inchToMetre(1, false);

			Assert::AreEqual(39.37, res);
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
