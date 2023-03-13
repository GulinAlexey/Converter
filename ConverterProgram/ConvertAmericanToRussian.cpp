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

double ConvertAmericanToRussian::inchToLokot(double input, bool directly) //дюймы (США) в локти (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::lokotToMetre(ConvertAmericanToSi::inchToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::inchToMetre(ConvertRussianToSi::lokotToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::inchToSazhen(double input, bool directly) //дюймы (США) в сажени (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::sazhenToMetre(ConvertAmericanToSi::inchToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::inchToMetre(ConvertRussianToSi::sazhenToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::inchToVersta(double input, bool directly) //дюймы (США) в вёрсты (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::verstaToMetre(ConvertAmericanToSi::inchToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::inchToMetre(ConvertRussianToSi::verstaToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::inchToPyad(double input, bool directly) //дюймы (США) в пяди (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::pyadToMetre(ConvertAmericanToSi::inchToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::inchToMetre(ConvertRussianToSi::pyadToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::inchToLadon(double input, bool directly) //дюймы (США) в ладони (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::ladonToMetre(ConvertAmericanToSi::inchToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::inchToMetre(ConvertRussianToSi::ladonToMetre(input, true), false);
	}
}

