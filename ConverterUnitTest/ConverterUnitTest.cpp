#include "pch.h"
#include "CppUnitTest.h"
#include "../ConverterProgram/ConvertAmericanToSi.h"
#include "../ConverterProgram/ConvertRussianToSi.h"
#include "../ConverterProgram/ConvertAmericanToRussian.h"

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
	};

	TEST_CLASS(ConvertAmericanToRussianTest)
	{
	public:

		TEST_METHOD(CreateConvertAmericanToRussianTest)
		{
			ConvertAmericanToRussian* conv = new ConvertAmericanToRussian();
			Assert::IsNotNull(conv);
		}
	};
}
