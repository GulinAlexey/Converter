#include "ConvertAmericanToSi.h"

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
