#pragma once
class ConvertAmericanToSi
{
public:
	static double inchToMetre(double input, bool directly); //дюймы в метры (обратно при directly = false)
	static double footToMetre(double input, bool directly); //футы в метры (обратно при directly = false)
	static double yardToMetre(double input, bool directly); //ярды в метры (обратно при directly = false)
	static double mileToMetre(double input, bool directly); //мили в метры (обратно при directly = false)
	static double acreToSquareMetre(double input, bool directly); //акры в кв. метры (обратно при directly = false)
	static double poundToKg(double input, bool directly); //фунты в кг (обратно при directly = false)
	static double hundredweightToKg(double input, bool directly); //центнеры США в кг (обратно при directly = false)
	static double fahrenheitToKelvin(double input, bool directly); //фаренгейты в кельвины (обратно при directly = false)
	static double gallonToCubicMetre(double input, bool directly); //галлоны в куб. метры (обратно при directly = false)
	static double barrelToCubicMetre(double input, bool directly); //баррели в куб. метры (обратно при directly = false)
};

