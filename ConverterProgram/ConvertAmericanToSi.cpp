#include "ConvertAmericanToSi.h"

double ConvertAmericanToSi::inchToMetre(double input, bool directly) //дюймы в метры (обратно при directly = false)
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

double ConvertAmericanToSi::footToMetre(double input, bool directly) //футы в метры (обратно при directly = false)
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

double ConvertAmericanToSi::yardToMetre(double input, bool directly) //ярды в метры (обратно при directly = false)
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

double ConvertAmericanToSi::mileToMetre(double input, bool directly) //мили в метры (обратно при directly = false)
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

double ConvertAmericanToSi::acreToSquareMetre(double input, bool directly) //акры в кв. метры (обратно при directly = false)
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

double ConvertAmericanToSi::poundToKg(double input, bool directly) //фунты в кг (обратно при directly = false)
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

double ConvertAmericanToSi::hundredweightToKg(double input, bool directly) //центнеры США в кг (обратно при directly = false)
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

double ConvertAmericanToSi::fahrenheitToKelvin(double input, bool directly) //фаренгейты в кельвины (обратно при directly = false)
{
	if (directly)
	{
		return (input + 459.67) * 5 / 9;
	}
	else
	{
		return 1.8 * (input - 273) + 32;
	}
}

double ConvertAmericanToSi::gallonToCubicMetre(double input, bool directly) //галлоны в куб. метры (обратно при directly = false)
{
	double coeff = 0.003785411784;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}

double ConvertAmericanToSi::barrelToCubicMetre(double input, bool directly) //баррели в куб. метры (обратно при directly = false)
{
	double coeff = 0.119240471196;
	if (directly)
	{
		return input * coeff;
	}
	else
	{
		return input / coeff;
	}
}