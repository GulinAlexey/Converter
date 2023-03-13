#include "ConvertAmericanToRussian.h"
#include "ConvertAmericanToSi.h"
#include "ConvertRussianToSi.h"

double ConvertAmericanToRussian::inchToArshin(double input, bool directly) //дюймы (США) в аршины (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::arshinToMetre(ConvertAmericanToSi::inchToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::inchToMetre(ConvertRussianToSi::arshinToMetre(input, true), false);
	}
}