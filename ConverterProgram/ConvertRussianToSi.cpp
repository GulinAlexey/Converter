#include "ConvertRussianToSi.h"

double ConvertRussianToSi::arshinToMetre(double input, bool directly) //аршины в метры
{
	double coeff = 0.7112;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::lokotToMetre(double input, bool directly) //локти в метры
{
	double coeff = 0.4572;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::sazhenToMetre(double input, bool directly) //сажени в метры
{
	double coeff = 2.1336;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::verstaToMetre(double input, bool directly) //вёрсты в метры
{
	double coeff = 1066.8;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::pyadToMetre(double input, bool directly) //пяди в метры
{
	double coeff = 0.1778;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::ladonToMetre(double input, bool directly) //ладони в метры
{
	double coeff = 0.0762;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::desyatinaToSquareMetre(double input, bool directly) //десятины в кв. метры
{
	double coeff = 10925.4;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::funtToKg(double input, bool directly) //фунты (русские) в кг
{
	double coeff = 0.40951718;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::poodToKg(double input, bool directly) //пуды (русские) в кг
{
	double coeff = 16.3807;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::bochkaToCubicMetre(double input, bool directly) //бочки в куб. метры (обратно при directly = false)
{
	double coeff = 0.4919764;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertRussianToSi::charkaToCubicMetre(double input, bool directly) //чарки в куб. метры (обратно при directly = false)
{
	double coeff = 0.0001229941;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}
