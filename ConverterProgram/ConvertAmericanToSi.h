#pragma once
class ConvertAmericanToSi
{
public:
	static double inchToMetre(double input, bool directly); //дюймы в метры
	static double footToMetre(double input, bool directly); //футы в метры
	static double yardToMetre(double input, bool directly); //ярды в метры
	static double mileToMetre(double input, bool directly); //мили в метры
	static double acreToSquareMetre(double input, bool directly); //акры в кв. метры
	static double poundToKg(double input, bool directly); //фунты в кг
	static double hundredweightToKg(double input, bool directly); //центнеры США в кг
	static double fahrenheitToKelvin(double input, bool directly); //фаренгейты в кельвины
};

