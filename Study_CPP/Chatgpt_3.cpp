#include "Chatgpt_3.h"

void Chatgpt_3()
{
	int Fahrenheit;
	int Celsius;
	std::cout << "ȭ�� �µ��� �������ÿ� : ";
	std::cin >> Fahrenheit;
	Celsius = (Fahrenheit - 32) * 5 / 9;

	std::cout << "�����δ� : " << Celsius << std::endl;
}
