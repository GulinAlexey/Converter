﻿#pragma once
class ConvertAmericanToRussian
{
public:
	static double inchToArshin(double input, bool directly); //дюймы (США) в аршины (обратно при directly = false)
	static double inchToLokot(double input, bool directly); //дюймы (США) в локти (обратно при directly = false)
	static double inchToSazhen(double input, bool directly); //дюймы (США) в сажени (обратно при directly = false)
	static double inchToVersta(double input, bool directly); //дюймы (США) в вёрсты (обратно при directly = false)
	static double inchToPyad(double input, bool directly); //дюймы (США) в пяди (обратно при directly = false)
	static double inchToLadon(double input, bool directly); //дюймы (США) в ладони (обратно при directly = false)
	
	static double footToArshin(double input, bool directly); //футы (США) в аршины (обратно при directly = false)
	static double footToLokot(double input, bool directly); //футы (США) в локти (обратно при directly = false)
	static double footToSazhen(double input, bool directly); //футы (США) в сажени (обратно при directly = false)
	static double footToVersta(double input, bool directly); //футы (США) в вёрсты (обратно при directly = false)
	static double footToPyad(double input, bool directly); //футы (США) в пяди (обратно при directly = false)
	static double footToLadon(double input, bool directly); //футы (США) в ладони (обратно при directly = false)
	
	static double yardToArshin(double input, bool directly); //ярды в аршины (обратно при directly = false)
	static double yardToLokot(double input, bool directly); //ярды в локти (обратно при directly = false)
	static double yardToSazhen(double input, bool directly); //ярды в сажени (обратно при directly = false)
	static double yardToVersta(double input, bool directly); //ярды в вёрсты (обратно при directly = false)
	static double yardToPyad(double input, bool directly); //ярды в пяди (обратно при directly = false)
	static double yardToLadon(double input, bool directly); //ярды в ладони (обратно при directly = false)
	
	static double mileToArshin(double input, bool directly); //мили (США) в аршины (обратно при directly = false)
	static double mileToLokot(double input, bool directly); //мили (США) в локти (обратно при directly = false)
	static double mileToSazhen(double input, bool directly); //мили (США) в сажени (обратно при directly = false)
	static double mileToVersta(double input, bool directly); //мили (США) в вёрсты (обратно при directly = false)
	static double mileToPyad(double input, bool directly); //мили (США) в пяди (обратно при directly = false)
	static double mileToLadon(double input, bool directly); //мили (США) в ладони (обратно при directly = false)
	
	static double acreToDesyatina(double input, bool directly); //акры в десятины (обратно при directly = false)
	static double poundUsaToFuntRus(double input, bool directly); //фунты (США) в фунты (русские) (обратно при directly = false)
	static double poundUsaToPoodRus(double input, bool directly); //фунты (США) в пуды (русские) (обратно при directly = false)
	static double hundredweightToFuntRus(double input, bool directly); //центнеры в фунты (русские) (обратно при directly = false)
	static double hundredweightToPoodRus(double input, bool directly); //центнеры в пуды (русские) (обратно при directly = false)
	static double gallonToBochka(double input, bool directly); //галлоны в бочки (обратно при directly = false)
	static double gallonToCharka(double input, bool directly); // галлоны в чарки (обратно при directly = false)
	static double barrelToBochka(double input, bool directly); // баррели в бочки (обратно при directly = false)
	static double barrelToCharka(double input, bool directly); // баррели в чарки (обратно при directly = false)
}; 

