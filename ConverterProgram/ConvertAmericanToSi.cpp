﻿#include "ConvertAmericanToSi.h"

double ConvertAmericanToSi::inchToMetre(double input, bool directly) //дюймы в метры
{
	double coeff = 0.0254;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::footToMetre(double input, bool directly) //футы в метры
{
	double coeff = 0.3048;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::yardToMetre(double input, bool directly) //ярды в метры
{
	double coeff = 0.9144;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::mileToMetre(double input, bool directly) //мили в метры
{
	double coeff = 1609.344;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::acreToSquareMetre(double input, bool directly) //акры в кв. метры
{
	double coeff = 4046.873;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::poundToKg(double input, bool directly) //фунты в кг
{
	double coeff = 0.45359237;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::hundredweightToKg(double input, bool directly) //центнеры США в кг
{
	double coeff = 45.359237;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::fahrenheitToKelvin(double input, bool directly) //фаренгейты в кельвины
{
	double coeff = 45.359237;
	if (directly)
	{
		return (input + 459.67) * 5 / 9;
	}
	else
	{
		return 1.8 * (input - 273) + 32;
	}
}
