#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ConverterUnitTest
{
	TEST_CLASS(ConvertertAmericanToSiTest)
	{
	public:

		TEST_METHOD(CreateConvertertAmericanToSiTest)
		{
			ConvertertAmericanToSi* conv = new ConvertertAmericanToSi();
			Assert::IsNotNull(conv);
		}
	};

	TEST_CLASS(ConvertRussianToSiTest)
	{
	public:

		TEST_METHOD(CreateConvertRussianToSiTest)
		{
			ConvertertRussianToSi* conv = new ConvertertRussianToSi();
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
