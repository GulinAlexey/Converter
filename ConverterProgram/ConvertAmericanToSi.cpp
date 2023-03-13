#include "ConvertAmericanToSi.h"

double ConvertAmericanToSi::inchToMetre(double input, bool directly) //дюймы в метры
{
	if (directly)
	{
		return input * 0.0254;
	}
	else
	{
		return input * 39.37008;
	}
}