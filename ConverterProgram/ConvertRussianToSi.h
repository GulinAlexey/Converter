#pragma once
class ConvertRussianToSi
{
public:
	static double arshinToMetre(double input, bool directly); //аршины в метры (обратно при directly = false)
	static double lokotToMetre(double input, bool directly); //локти в метры (обратно при directly = false)
	static double sazhenToMetre(double input, bool directly); //сажени в метры (обратно при directly = false)
	static double verstaToMetre(double input, bool directly); //вёрсты в метры (обратно при directly = false)
	static double pyadToMetre(double input, bool directly); //пяди в метры (обратно при directly = false)
	static double ladonToMetre(double input, bool directly); //ладони в метры (обратно при directly = false)
	static double desyatinaToSquareMetre(double input, bool directly); //десятины в кв. метры (обратно при directly = false)
	static double funtToKg(double input, bool directly); //фунты (русские) в кг (обратно при directly = false)
	static double poodToKg(double input, bool directly); //пуды (русские) в кг (обратно при directly = false)
	static double bochkaToCubicMetre(double input, bool directly); //бочки в куб. метры (обратно при directly = false)
	static double charkaToCubicMetre(double input, bool directly); //чарки в куб. метры (обратно при directly = false)
};

