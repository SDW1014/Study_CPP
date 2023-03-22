#include "Chatgpt_3.h"

void Chatgpt_3()
{
	int Fahrenheit;
	int Celsius;
	std::cout << "È­¾¾ ¿Âµµ¸¦ ³»³õÀ¸½Ã¿À : ";
	std::cin >> Fahrenheit;
	Celsius = (Fahrenheit - 32) * 5 / 9;

	std::cout << "¼·¾¾·Î´Â : " << Celsius << std::endl;
}
