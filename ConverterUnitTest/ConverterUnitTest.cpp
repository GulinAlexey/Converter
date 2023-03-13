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
		TEST_METHOD(Acre1ToSquareMetreTest)
		{
			double res = ConvertAmericanToSi::acreToSquareMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(4046.873, res);
		}
		TEST_METHOD(Acre2_3ToSquareMetreTest)
		{
			double res = ConvertAmericanToSi::acreToSquareMetre(2.3, true);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(9307.81, res);
		}
		TEST_METHOD(SquareMetre1ToAcreTest)
		{
			double res = ConvertAmericanToSi::acreToSquareMetre(1, false);
			res = round(res * 100000) / 100000; //округление до пятого знака после запятой

			Assert::AreEqual(0.00025, res);
		}
		TEST_METHOD(SquareMetre450ToAcreTest)
		{
			double res = ConvertAmericanToSi::acreToSquareMetre(450, false);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(0.11, res);
		}
		TEST_METHOD(Pound1ToKgTest)
		{
			double res = ConvertAmericanToSi::poundToKg(1, true);

			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(0.45, res);
		}
		TEST_METHOD(Pound3_8ToKgTest)
		{
			double res = ConvertAmericanToSi::poundToKg(3.8, true);

			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(1.72, res);
		}
		TEST_METHOD(Kg1ToPoundTest)
		{
			double res = ConvertAmericanToSi::poundToKg(1, false);

			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(2.2, res);
		}
		TEST_METHOD(Kg7_77ToPoundTest)
		{
			double res = ConvertAmericanToSi::poundToKg(7.77, false);

			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(17.13, res);
		}
		TEST_METHOD(Hundredweight1ToKgTest)
		{
			double res = ConvertAmericanToSi::hundredweightToKg(1, true);
			res = round(res); //округление

			Assert::AreEqual(45.0, res);
		}
		TEST_METHOD(Hundredweight24ToKgTest)
		{
			double res = ConvertAmericanToSi::hundredweightToKg(24, true);
			res = round(res); //округление

			Assert::AreEqual(1089.0, res);
		}
		TEST_METHOD(Kg1ToHundredweightTest)
		{
			double res = ConvertAmericanToSi::hundredweightToKg(1, false);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(0.02, res);
		}
		TEST_METHOD(Kg76ToHundredweightTest)
		{
			double res = ConvertAmericanToSi::hundredweightToKg(76, false);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(1.68, res);
		}
		TEST_METHOD(Fahrenheit1ToKelvinTest)
		{
			double res = ConvertAmericanToSi::fahrenheitToKelvin(1, true);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(255.93, res);
		}
		TEST_METHOD(Fahrenheit200ToKelvinTest)
		{
			double res = ConvertAmericanToSi::fahrenheitToKelvin(200, true);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(366.48, res);
		}
		TEST_METHOD(Kelvin1ToFahrenheitTest)
		{
			double res = ConvertAmericanToSi::fahrenheitToKelvin(1, false);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(-457.6, res);
		}
		TEST_METHOD(Kelvin352ToFahrenheitTest)
		{
			double res = ConvertAmericanToSi::fahrenheitToKelvin(352, false);
			res = round(res * 100) / 100; //округление до второго знака после запятой

			Assert::AreEqual(174.2, res);
		}
		TEST_METHOD(Gallon1ToCubicMetreTest)
		{
			double res = ConvertAmericanToSi::gallonToCubicMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.004, res);
		}
		TEST_METHOD(Gallon188ToCubicMetreTest)
		{
			double res = ConvertAmericanToSi::gallonToCubicMetre(188, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.712, res);
		}
		TEST_METHOD(CubicMetre1ToGallonTest)
		{
			double res = ConvertAmericanToSi::gallonToCubicMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(264.172, res);
		}
		TEST_METHOD(CubicMetre0_17ToGallonTest)
		{
			double res = ConvertAmericanToSi::gallonToCubicMetre(0.17, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(44.909, res);
		}
		TEST_METHOD(Barrel1ToCubicMetreTest)
		{
			double res = ConvertAmericanToSi::barrelToCubicMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.119, res);
		}
		TEST_METHOD(Barrel444ToCubicMetreTest)
		{
			double res = ConvertAmericanToSi::barrelToCubicMetre(444, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(52.943, res);
		}
		TEST_METHOD(CubicMetre1ToBarrelTest)
		{
			double res = ConvertAmericanToSi::barrelToCubicMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(8.386, res);
		}
		TEST_METHOD(CubicMetre1_14ToBarrelTest)
		{
			double res = ConvertAmericanToSi::barrelToCubicMetre(1.14, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(9.561, res);
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
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.711, res);
		}
		TEST_METHOD(Arshin13_64ToMetreTest)
		{
			double res = ConvertRussianToSi::arshinToMetre(13.64, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(9.701, res);
		}
		TEST_METHOD(Metre1ToArshinTest)
		{
			double res = ConvertRussianToSi::arshinToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(1.406, res);
		}
		TEST_METHOD(Metre18ToArshinTest)
		{
			double res = ConvertRussianToSi::arshinToMetre(18, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(25.309, res);
		}
		TEST_METHOD(Lokot1ToMetreTest)
		{
			double res = ConvertRussianToSi::lokotToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.457, res);
		}
		TEST_METHOD(Lokot4_74ToMetreTest)
		{
			double res = ConvertRussianToSi::lokotToMetre(4.74, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.167, res);
		}
		TEST_METHOD(Metre1ToLokotTest)
		{
			double res = ConvertRussianToSi::lokotToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.187, res);
		}
		TEST_METHOD(Metre5_12ToLokotTest)
		{
			double res = ConvertRussianToSi::lokotToMetre(5.12, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(11.199, res);
		}
		TEST_METHOD(Sazhen1ToMetreTest)
		{
			double res = ConvertRussianToSi::sazhenToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.134, res);
		}
		TEST_METHOD(Sazhen6_4ToMetreTest)
		{
			double res = ConvertRussianToSi::sazhenToMetre(6.4, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(13.655, res);
		}
		TEST_METHOD(Metre1ToSazhenTest)
		{
			double res = ConvertRussianToSi::sazhenToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.469, res);
		}
		TEST_METHOD(Metre8_2ToSazhenTest)
		{
			double res = ConvertRussianToSi::sazhenToMetre(8.2, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(3.843, res);
		}
		TEST_METHOD(Versta1ToMetreTest)
		{
			double res = ConvertRussianToSi::verstaToMetre(1, true);
			res = round(res * 10) / 10; //округление до одного знака после запятой

			Assert::AreEqual(1066.8, res);
		}
		TEST_METHOD(Versta0_54ToMetreTest)
		{
			double res = ConvertRussianToSi::verstaToMetre(0.54, true);
			res = round(res * 10) / 10; //округление до одного знака после запятой

			Assert::AreEqual(576.1, res);
		}
		TEST_METHOD(Metre1ToVerstaTest)
		{
			double res = ConvertRussianToSi::verstaToMetre(1, false);
			res = round(res * 100000) / 100000; //округление до пятого знака после запятой

			Assert::AreEqual(0.00094, res);
		}
		TEST_METHOD(Metre45ToVerstaTest)
		{
			double res = ConvertRussianToSi::verstaToMetre(45, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.042, res);
		}
		TEST_METHOD(Pyad1ToMetreTest)
		{
			double res = ConvertRussianToSi::pyadToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.178, res);
		}
		TEST_METHOD(Pyad5_33ToMetreTest)
		{
			double res = ConvertRussianToSi::pyadToMetre(5.33, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.948, res);
		}
		TEST_METHOD(Metre1ToPyadTest)
		{
			double res = ConvertRussianToSi::pyadToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(5.624, res);
		}
		TEST_METHOD(Metre21ToPyadTest)
		{
			double res = ConvertRussianToSi::pyadToMetre(21, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(118.11, res);
		}
		TEST_METHOD(Ladon1ToMetreTest)
		{
			double res = ConvertRussianToSi::ladonToMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.076, res);
		}
		TEST_METHOD(Ladon33ToMetreTest)
		{
			double res = ConvertRussianToSi::ladonToMetre(33, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.515, res);
		}
		TEST_METHOD(Metre1ToLadonTest)
		{
			double res = ConvertRussianToSi::ladonToMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(13.123, res);
		}
		TEST_METHOD(Metre2_22ToLadonTest)
		{
			double res = ConvertRussianToSi::ladonToMetre(2.22, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(29.134, res);
		}
		TEST_METHOD(Desyatina1ToSquareMetreTest)
		{
			double res = ConvertRussianToSi::desyatinaToSquareMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(10925.4, res);
		}
		TEST_METHOD(Desyatina0_051ToSquareMetreTest)
		{
			double res = ConvertRussianToSi::desyatinaToSquareMetre(0.051, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(557.195, res);
		}
		TEST_METHOD(SquareMetre1ToDesyatinaTest)
		{
			double res = ConvertRussianToSi::desyatinaToSquareMetre(1, false);
			res = round(res * 100000) / 100000; //округление до пятого знака после запятой

			Assert::AreEqual(0.00009, res);
		}
		TEST_METHOD(SquareMetre1024ToDesyatinaTest)
		{
			double res = ConvertRussianToSi::desyatinaToSquareMetre(1024, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.094, res);
		}
		TEST_METHOD(Funt1ToKgTest)
		{
			double res = ConvertRussianToSi::funtToKg(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.41, res);
		}
		TEST_METHOD(Funt22ToKgTest)
		{
			double res = ConvertRussianToSi::funtToKg(22, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(9.009, res);
		}
		TEST_METHOD(Kg1ToFuntTest)
		{
			double res = ConvertRussianToSi::funtToKg(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.442, res);
		}
		TEST_METHOD(Kg6ToFuntTest)
		{
			double res = ConvertRussianToSi::funtToKg(6, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(14.651, res);
		}
		TEST_METHOD(Pood1ToKgTest)
		{
			double res = ConvertRussianToSi::poodToKg(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(16.381, res);
		}
		TEST_METHOD(Pood5_3ToKgTest)
		{
			double res = ConvertRussianToSi::poodToKg(5.3, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(86.818, res);
		}
		TEST_METHOD(Kg1ToPoodTest)
		{
			double res = ConvertRussianToSi::poodToKg(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.061, res);
		}
		TEST_METHOD(Kg500ToPoodTest)
		{
			double res = ConvertRussianToSi::poodToKg(500, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(30.524, res);
		}
		TEST_METHOD(Bochka1ToCubicMetreTest)
		{
			double res = ConvertRussianToSi::bochkaToCubicMetre(1, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.492, res);
		}
		TEST_METHOD(Bochka5_78ToCubicMetreTest)
		{
			double res = ConvertRussianToSi::bochkaToCubicMetre(5.78, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.844, res);
		}
		TEST_METHOD(CubicMetre1ToBochkaTest)
		{
			double res = ConvertRussianToSi::bochkaToCubicMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(2.033, res);
		}
		TEST_METHOD(CubicMetre3_66ToBochkaTest)
		{
			double res = ConvertRussianToSi::bochkaToCubicMetre(3.66, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(7.439, res);
		}
		TEST_METHOD(Charka1ToCubicMetreTest)
		{
			double res = ConvertRussianToSi::charkaToCubicMetre(1, true);
			res = round(res * 100000) / 100000; //округление до пятого знака после запятой

			Assert::AreEqual(0.00012, res);
		}
		TEST_METHOD(Charka238ToCubicMetreTest)
		{
			double res = ConvertRussianToSi::charkaToCubicMetre(238, true);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.029, res);
		}
		TEST_METHOD(CubicMetre1ToCharkaTest)
		{
			double res = ConvertRussianToSi::charkaToCubicMetre(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(8130.471, res);
		}
		TEST_METHOD(CubicMetre0_12ToCharkaTest)
		{
			double res = ConvertRussianToSi::charkaToCubicMetre(0.12, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(975.657, res);
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
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(0.036, res);
		}
		TEST_METHOD(Arshin1ToInchTest)
		{
			double res = ConvertAmericanToRussian::inchToArshin(1, false);
			res = round(res * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(28.0, res);
		}

		TEST_METHOD(Inch1ToArshinAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToArshin(1, true);

			double resBack = ConvertAmericanToRussian::inchToArshin(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToArshin(resBack, true);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Arshin1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToArshin(1, false);

			double resBack = ConvertAmericanToRussian::inchToArshin(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToArshin(resBack, false);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToLokotAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLokot(1, true);

			double resBack = ConvertAmericanToRussian::inchToLokot(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToLokot(resBack, true);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Lokot1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLokot(1, false);

			double resBack = ConvertAmericanToRussian::inchToLokot(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToLokot(resBack, false);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToSazhenAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToSazhen(1, true);

			double resBack = ConvertAmericanToRussian::inchToSazhen(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToSazhen(resBack, true);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Sazhen1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToSazhen(1, false);

			double resBack = ConvertAmericanToRussian::inchToSazhen(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToSazhen(resBack, false);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToVerstaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToVersta(1, true);

			double resBack = ConvertAmericanToRussian::inchToVersta(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToVersta(resBack, true);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Versta1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToVersta(1, false);

			double resBack = ConvertAmericanToRussian::inchToVersta(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToVersta(resBack, false);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToPyadAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToPyad(1, true);

			double resBack = ConvertAmericanToRussian::inchToPyad(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToPyad(resBack, true);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Pyad1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToPyad(1, false);

			double resBack = ConvertAmericanToRussian::inchToPyad(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToPyad(resBack, false);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToLadonAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLadon(1, true);

			double resBack = ConvertAmericanToRussian::inchToLadon(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToLadon(resBack, true);

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Ladon1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLadon(1, false);

			double resBack = ConvertAmericanToRussian::inchToLadon(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToLadon(resBack, false);

			Assert::AreEqual(resNormal, resBack);
		}
	};
}
