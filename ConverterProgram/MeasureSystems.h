#pragma once
#include <string>
#include <vector>

enum systems { americ, si, rus };
std::vector <std::string> systemNames = { "Американская", "СИ", "Старорусская" };

enum americanSystem { inch, foot, yard, mile, acre, pound, hundredweight, fahrenheit, gallon, barrel };
std::vector <std::string> americanSystemNames = { "дюйм", "фут", "ярд", "миля", "акр", "фунт", "центнер", "градус по Фаренгейту", "галлон", "баррель" };

enum siSystem { metre, squareMetre, kg, kelvin, cubicMetre };
std::vector <std::string> siSystemNames = { "метр", "кв. метр", "кг", "градус по Кельвину", "куб. метр" };

enum russianSystem { arshin, lokot, sazhen, versta, pyad, ladon, desyatina, funt, pood, bochka, charka };
std::vector <std::string> russianSystemNames = { "аршин", "локоть", "сажень", "верста", "пядь", "ладонь", "десятина", "фунт", "пуд", "бочка", "чарка" };