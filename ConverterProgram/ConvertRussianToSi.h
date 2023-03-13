#pragma once
class ConvertRussianToSi
{
public:
	static double arshinToMetre(double input, bool directly); //аршины в метры
	static double lokotToMetre(double input, bool directly); //локти в метры
	static double sazhenToMetre(double input, bool directly); //сажени в метры
	static double verstaToMetre(double input, bool directly); //вёрсты в метры
	static double pyadToMetre(double input, bool directly); //пяди в метры
	static double ladonToMetre(double input, bool directly); //ладони в метры
	static double desyatinaToSquareMetre(double input, bool directly); //десятины в кв. метры
	static double funtToKg(double input, bool directly); //фунты (русские) в кг
	static double poodToKg(double input, bool directly); //пуды (русские) в кг
};

