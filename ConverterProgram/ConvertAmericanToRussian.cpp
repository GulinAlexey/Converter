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

double ConvertAmericanToRussian::footToArshin(double input, bool directly) //футы (США) в аршины (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::arshinToMetre(ConvertAmericanToSi::footToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::footToMetre(ConvertRussianToSi::arshinToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::footToLokot(double input, bool directly) //футы (США) в локти (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::lokotToMetre(ConvertAmericanToSi::footToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::footToMetre(ConvertRussianToSi::lokotToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::footToSazhen(double input, bool directly) //футы (США) в сажени (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::sazhenToMetre(ConvertAmericanToSi::footToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::footToMetre(ConvertRussianToSi::sazhenToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::footToVersta(double input, bool directly) //футы (США) в вёрсты (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::verstaToMetre(ConvertAmericanToSi::footToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::footToMetre(ConvertRussianToSi::verstaToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::footToPyad(double input, bool directly) //футы (США) в пяди (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::pyadToMetre(ConvertAmericanToSi::footToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::footToMetre(ConvertRussianToSi::pyadToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::footToLadon(double input, bool directly) //футы (США) в ладони (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::ladonToMetre(ConvertAmericanToSi::footToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::footToMetre(ConvertRussianToSi::ladonToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::yardToArshin(double input, bool directly) //ярды в аршины (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::arshinToMetre(ConvertAmericanToSi::yardToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::yardToMetre(ConvertRussianToSi::arshinToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::yardToLokot(double input, bool directly) //ярды в локти (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::lokotToMetre(ConvertAmericanToSi::yardToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::yardToMetre(ConvertRussianToSi::lokotToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::yardToSazhen(double input, bool directly) //ярды в сажени (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::sazhenToMetre(ConvertAmericanToSi::yardToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::yardToMetre(ConvertRussianToSi::sazhenToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::yardToVersta(double input, bool directly) //ярды в вёрсты (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::verstaToMetre(ConvertAmericanToSi::yardToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::yardToMetre(ConvertRussianToSi::verstaToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::yardToPyad(double input, bool directly) //ярды в пяди (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::pyadToMetre(ConvertAmericanToSi::yardToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::yardToMetre(ConvertRussianToSi::pyadToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::yardToLadon(double input, bool directly) //ярды в ладони (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::ladonToMetre(ConvertAmericanToSi::yardToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::yardToMetre(ConvertRussianToSi::ladonToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::mileToArshin(double input, bool directly) //мили в аршины (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::arshinToMetre(ConvertAmericanToSi::mileToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::mileToMetre(ConvertRussianToSi::arshinToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::mileToLokot(double input, bool directly) //мили в локти (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::lokotToMetre(ConvertAmericanToSi::mileToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::mileToMetre(ConvertRussianToSi::lokotToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::mileToSazhen(double input, bool directly) //мили в сажени (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::sazhenToMetre(ConvertAmericanToSi::mileToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::mileToMetre(ConvertRussianToSi::sazhenToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::mileToVersta(double input, bool directly) //мили в вёрсты (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::verstaToMetre(ConvertAmericanToSi::mileToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::mileToMetre(ConvertRussianToSi::verstaToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::mileToPyad(double input, bool directly) //мили в пяди (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::pyadToMetre(ConvertAmericanToSi::mileToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::mileToMetre(ConvertRussianToSi::pyadToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::mileToLadon(double input, bool directly) //мили в ладони (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::ladonToMetre(ConvertAmericanToSi::mileToMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::mileToMetre(ConvertRussianToSi::ladonToMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::acreToDesyatina(double input, bool directly) //акры в десятины (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::desyatinaToSquareMetre(ConvertAmericanToSi::acreToSquareMetre(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::acreToSquareMetre(ConvertRussianToSi::desyatinaToSquareMetre(input, true), false);
	}
}

double ConvertAmericanToRussian::poundUsaToFuntRus(double input, bool directly) //фунты (США) в фунты (русские) (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::funtToKg(ConvertAmericanToSi::poundToKg(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::poundToKg(ConvertRussianToSi::funtToKg(input, true), false);
	}
}

double ConvertAmericanToRussian::poundUsaToPoodRus(double input, bool directly) //фунты (США) в пуды (русские) (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::poodToKg(ConvertAmericanToSi::poundToKg(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::poundToKg(ConvertRussianToSi::poodToKg(input, true), false);
	}
}

double ConvertAmericanToRussian::hundredweightToFuntRus(double input, bool directly) //центнеры в фунты (русские) (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::funtToKg(ConvertAmericanToSi::hundredweightToKg(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::hundredweightToKg(ConvertRussianToSi::funtToKg(input, true), false);
	}
}

double ConvertAmericanToRussian::hundredweightToPoodRus(double input, bool directly) //центнеры в пуды (русские) (обратно при directly = false)
{
	if (directly)
	{
		return ConvertRussianToSi::poodToKg(ConvertAmericanToSi::hundredweightToKg(input, true), false);
	}
	else
	{
		return ConvertAmericanToSi::hundredweightToKg(ConvertRussianToSi::poodToKg(input, true), false);
	}
}