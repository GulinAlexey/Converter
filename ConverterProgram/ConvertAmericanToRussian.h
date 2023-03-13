#pragma once
class ConvertAmericanToRussian
{
public:
	static double inchToArshin(double input, bool directly); //дюймы (США) в аршины (обратно при directly = false)
	static double inchToLokot(double input, bool directly); //дюймы (США) в локти (обратно при directly = false)
	static double inchToSazhen(double input, bool directly); //дюймы (США) в сажени (обратно при directly = false)
	static double inchToVersta(double input, bool directly); //дюймы (США) в вёрсты (обратно при directly = false)
	static double inchToPyad(double input, bool directly); //дюймы (США) в пяди (обратно при directly = false)
	static double inchToLadon(double input, bool directly); //дюймы (США) в ладони (обратно при directly = false)

}; 

