﻿#include "pch.h"
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

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Arshin1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToArshin(1, false);

			double resBack = ConvertAmericanToRussian::inchToArshin(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToArshin(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToLokotAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLokot(1, true);

			double resBack = ConvertAmericanToRussian::inchToLokot(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToLokot(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Lokot1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLokot(1, false);

			double resBack = ConvertAmericanToRussian::inchToLokot(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToLokot(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToSazhenAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToSazhen(1, true);

			double resBack = ConvertAmericanToRussian::inchToSazhen(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToSazhen(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Sazhen1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToSazhen(1, false);

			double resBack = ConvertAmericanToRussian::inchToSazhen(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToSazhen(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToVerstaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToVersta(1, true);

			double resBack = ConvertAmericanToRussian::inchToVersta(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToVersta(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Versta1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToVersta(1, false);

			double resBack = ConvertAmericanToRussian::inchToVersta(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToVersta(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToPyadAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToPyad(1, true);

			double resBack = ConvertAmericanToRussian::inchToPyad(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToPyad(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Pyad1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToPyad(1, false);

			double resBack = ConvertAmericanToRussian::inchToPyad(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToPyad(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Inch1ToLadonAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLadon(1, true);

			double resBack = ConvertAmericanToRussian::inchToLadon(resNormal, false);
			resBack = ConvertAmericanToRussian::inchToLadon(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Ladon1ToInchAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::inchToLadon(1, false);

			double resBack = ConvertAmericanToRussian::inchToLadon(resNormal, true);
			resBack = ConvertAmericanToRussian::inchToLadon(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Foot1ToArshinAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToArshin(1, true);

			double resBack = ConvertAmericanToRussian::footToArshin(resNormal, false);
			resBack = ConvertAmericanToRussian::footToArshin(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Arshin1ToFootAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToArshin(1, false);

			double resBack = ConvertAmericanToRussian::footToArshin(resNormal, true);
			resBack = ConvertAmericanToRussian::footToArshin(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Foot1ToLokotAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToLokot(1, true);

			double resBack = ConvertAmericanToRussian::footToLokot(resNormal, false);
			resBack = ConvertAmericanToRussian::footToLokot(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Lokot1ToFootAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToLokot(1, false);

			double resBack = ConvertAmericanToRussian::footToLokot(resNormal, true);
			resBack = ConvertAmericanToRussian::footToLokot(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Foot1ToSazhenAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToSazhen(1, true);

			double resBack = ConvertAmericanToRussian::footToSazhen(resNormal, false);
			resBack = ConvertAmericanToRussian::footToSazhen(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Sazhen1ToFootAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToSazhen(1, false);

			double resBack = ConvertAmericanToRussian::footToSazhen(resNormal, true);
			resBack = ConvertAmericanToRussian::footToSazhen(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Foot1ToVerstaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToVersta(1, true);

			double resBack = ConvertAmericanToRussian::footToVersta(resNormal, false);
			resBack = ConvertAmericanToRussian::footToVersta(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Versta1ToFootAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToVersta(1, false);

			double resBack = ConvertAmericanToRussian::footToVersta(resNormal, true);
			resBack = ConvertAmericanToRussian::footToVersta(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Foot1ToPyadAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToPyad(1, true);

			double resBack = ConvertAmericanToRussian::footToPyad(resNormal, false);
			resBack = ConvertAmericanToRussian::footToPyad(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Pyad1ToFootAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToPyad(1, false);

			double resBack = ConvertAmericanToRussian::footToPyad(resNormal, true);
			resBack = ConvertAmericanToRussian::footToPyad(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Foot1ToLadonAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToLadon(1, true);

			double resBack = ConvertAmericanToRussian::footToLadon(resNormal, false);
			resBack = ConvertAmericanToRussian::footToLadon(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Ladon1ToFootAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::footToLadon(1, false);

			double resBack = ConvertAmericanToRussian::footToLadon(resNormal, true);
			resBack = ConvertAmericanToRussian::footToLadon(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Yard1ToArshinAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToArshin(1, true);

			double resBack = ConvertAmericanToRussian::yardToArshin(resNormal, false);
			resBack = ConvertAmericanToRussian::yardToArshin(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Arshin1ToYardAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToArshin(1, false);

			double resBack = ConvertAmericanToRussian::yardToArshin(resNormal, true);
			resBack = ConvertAmericanToRussian::yardToArshin(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Yard1ToLokotAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToLokot(1, true);

			double resBack = ConvertAmericanToRussian::yardToLokot(resNormal, false);
			resBack = ConvertAmericanToRussian::yardToLokot(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Lokot1ToYardAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToLokot(1, false);

			double resBack = ConvertAmericanToRussian::yardToLokot(resNormal, true);
			resBack = ConvertAmericanToRussian::yardToLokot(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Yard1ToSazhenAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToSazhen(1, true);

			double resBack = ConvertAmericanToRussian::yardToSazhen(resNormal, false);
			resBack = ConvertAmericanToRussian::yardToSazhen(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Sazhen1ToYardAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToSazhen(1, false);

			double resBack = ConvertAmericanToRussian::yardToSazhen(resNormal, true);
			resBack = ConvertAmericanToRussian::yardToSazhen(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Yard1ToVerstaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToVersta(1, true);

			double resBack = ConvertAmericanToRussian::yardToVersta(resNormal, false);
			resBack = ConvertAmericanToRussian::yardToVersta(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Versta1ToYardAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToVersta(1, false);

			double resBack = ConvertAmericanToRussian::yardToVersta(resNormal, true);
			resBack = ConvertAmericanToRussian::yardToVersta(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Yard1ToPyadAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToPyad(1, true);

			double resBack = ConvertAmericanToRussian::yardToPyad(resNormal, false);
			resBack = ConvertAmericanToRussian::yardToPyad(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Pyad1ToYardAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToPyad(1, false);

			double resBack = ConvertAmericanToRussian::yardToPyad(resNormal, true);
			resBack = ConvertAmericanToRussian::yardToPyad(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Yard1ToLadonAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToLadon(1, true);

			double resBack = ConvertAmericanToRussian::yardToLadon(resNormal, false);
			resBack = ConvertAmericanToRussian::yardToLadon(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Ladon1ToYardAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::yardToLadon(1, false);

			double resBack = ConvertAmericanToRussian::yardToLadon(resNormal, true);
			resBack = ConvertAmericanToRussian::yardToLadon(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}

		TEST_METHOD(Mile1ToArshinAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToArshin(1, true);

			double resBack = ConvertAmericanToRussian::mileToArshin(resNormal, false);
			resBack = ConvertAmericanToRussian::mileToArshin(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Arshin1ToMileAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToArshin(1, false);

			double resBack = ConvertAmericanToRussian::mileToArshin(resNormal, true);
			resBack = ConvertAmericanToRussian::mileToArshin(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Mile1ToLokotAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToLokot(1, true);

			double resBack = ConvertAmericanToRussian::mileToLokot(resNormal, false);
			resBack = ConvertAmericanToRussian::mileToLokot(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Lokot1ToMileAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToLokot(1, false);

			double resBack = ConvertAmericanToRussian::mileToLokot(resNormal, true);
			resBack = ConvertAmericanToRussian::mileToLokot(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Mile1ToSazhenAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToSazhen(1, true);

			double resBack = ConvertAmericanToRussian::mileToSazhen(resNormal, false);
			resBack = ConvertAmericanToRussian::mileToSazhen(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Sazhen1ToMileAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToSazhen(1, false);

			double resBack = ConvertAmericanToRussian::mileToSazhen(resNormal, true);
			resBack = ConvertAmericanToRussian::mileToSazhen(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Mile1ToVerstaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToVersta(1, true);

			double resBack = ConvertAmericanToRussian::mileToVersta(resNormal, false);
			resBack = ConvertAmericanToRussian::mileToVersta(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Versta1ToMileAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToVersta(1, false);

			double resBack = ConvertAmericanToRussian::mileToVersta(resNormal, true);
			resBack = ConvertAmericanToRussian::mileToVersta(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Mile1ToPyadAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToPyad(1, true);

			double resBack = ConvertAmericanToRussian::mileToPyad(resNormal, false);
			resBack = ConvertAmericanToRussian::mileToPyad(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Pyad1ToMileAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToPyad(1, false);

			double resBack = ConvertAmericanToRussian::mileToPyad(resNormal, true);
			resBack = ConvertAmericanToRussian::mileToPyad(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Mile1ToLadonAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToLadon(1, true);

			double resBack = ConvertAmericanToRussian::mileToLadon(resNormal, false);
			resBack = ConvertAmericanToRussian::mileToLadon(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Ladon1ToMileAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::mileToLadon(1, false);

			double resBack = ConvertAmericanToRussian::mileToLadon(resNormal, true);
			resBack = ConvertAmericanToRussian::mileToLadon(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Acre1ToDesyatinaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::acreToDesyatina(1, true);

			double resBack = ConvertAmericanToRussian::acreToDesyatina(resNormal, false);
			resBack = ConvertAmericanToRussian::acreToDesyatina(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Desyatina1ToAcreAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::acreToDesyatina(1, false);

			double resBack = ConvertAmericanToRussian::acreToDesyatina(resNormal, true);
			resBack = ConvertAmericanToRussian::acreToDesyatina(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(PoundUsa1ToFuntRusAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::poundUsaToFuntRus(1, true);

			double resBack = ConvertAmericanToRussian::poundUsaToFuntRus(resNormal, false);
			resBack = ConvertAmericanToRussian::poundUsaToFuntRus(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(FuntRus1ToPoundUsaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::poundUsaToFuntRus(1, false);

			double resBack = ConvertAmericanToRussian::poundUsaToFuntRus(resNormal, true);
			resBack = ConvertAmericanToRussian::poundUsaToFuntRus(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(PoundUsa1ToPoodRusAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::poundUsaToPoodRus(1, true);

			double resBack = ConvertAmericanToRussian::poundUsaToPoodRus(resNormal, false);
			resBack = ConvertAmericanToRussian::poundUsaToPoodRus(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(PoodRus1ToPoundUsaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::poundUsaToPoodRus(1, false);

			double resBack = ConvertAmericanToRussian::poundUsaToPoodRus(resNormal, true);
			resBack = ConvertAmericanToRussian::poundUsaToPoodRus(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Hundredweight1ToFuntRusAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::hundredweightToFuntRus(1, true);

			double resBack = ConvertAmericanToRussian::hundredweightToFuntRus(resNormal, false);
			resBack = ConvertAmericanToRussian::hundredweightToFuntRus(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(FuntRus1ToHundredweightAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::hundredweightToFuntRus(1, false);

			double resBack = ConvertAmericanToRussian::hundredweightToFuntRus(resNormal, true);
			resBack = ConvertAmericanToRussian::hundredweightToFuntRus(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Hundredweight1ToPoodRusAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::hundredweightToPoodRus(1, true);

			double resBack = ConvertAmericanToRussian::hundredweightToPoodRus(resNormal, false);
			resBack = ConvertAmericanToRussian::hundredweightToPoodRus(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(PoodRus1ToHundredweightAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::hundredweightToPoodRus(1, false);

			double resBack = ConvertAmericanToRussian::hundredweightToPoodRus(resNormal, true);
			resBack = ConvertAmericanToRussian::hundredweightToPoodRus(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Gallon1ToBochkaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::gallonToBochka(1, true);

			double resBack = ConvertAmericanToRussian::gallonToBochka(resNormal, false);
			resBack = ConvertAmericanToRussian::gallonToBochka(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Bochka1ToGallonAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::gallonToBochka(1, false);

			double resBack = ConvertAmericanToRussian::gallonToBochka(resNormal, true);
			resBack = ConvertAmericanToRussian::gallonToBochka(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Gallon1ToCharkaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::gallonToCharka(1, true);

			double resBack = ConvertAmericanToRussian::gallonToCharka(resNormal, false);
			resBack = ConvertAmericanToRussian::gallonToCharka(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Charka1ToGallonAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::gallonToCharka(1, false);

			double resBack = ConvertAmericanToRussian::gallonToCharka(resNormal, true);
			resBack = ConvertAmericanToRussian::gallonToCharka(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Barrel1ToBochkaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::barrelToBochka(1, true);

			double resBack = ConvertAmericanToRussian::barrelToBochka(resNormal, false);
			resBack = ConvertAmericanToRussian::barrelToBochka(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Bochka1ToBarrelAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::barrelToBochka(1, false);

			double resBack = ConvertAmericanToRussian::barrelToBochka(resNormal, true);
			resBack = ConvertAmericanToRussian::barrelToBochka(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Barrel1ToCharkaAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::barrelToCharka(1, true);

			double resBack = ConvertAmericanToRussian::barrelToCharka(resNormal, false);
			resBack = ConvertAmericanToRussian::barrelToCharka(resBack, true);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
		TEST_METHOD(Charka1ToBarrelAndBackTest)
		{
			double resNormal = ConvertAmericanToRussian::barrelToCharka(1, false);

			double resBack = ConvertAmericanToRussian::barrelToCharka(resNormal, true);
			resBack = ConvertAmericanToRussian::barrelToCharka(resBack, false);

			resNormal = round(resNormal * 1000) / 1000; //округление до третьего знака после запятой
			resBack = round(resBack * 1000) / 1000; //округление до третьего знака после запятой

			Assert::AreEqual(resNormal, resBack);
		}
	};
}
