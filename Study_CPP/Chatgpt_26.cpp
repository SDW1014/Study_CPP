#include "Chatgpt_26.h"

int scanNumber()
{
	int n;
	std::cout << "번호 입력해라 : ";
	std::cin >> n;

	return n;
}

void printArray(int thisN_1, int thisN_2)
{
	for (int i = 0; i < thisN_2; i++)
	{
		for (int j = 0; j < thisN_1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

void printArraySecond(int thisN_1, int thisN_2)
{
	for (int i = 0; i < thisN_2; i++)
	{
		string row(thisN_1, '*');
		std::cout << row << std::endl;
	}
}

void Chatgpt_26()
{
	printArraySecond(scanNumber(), scanNumber());
}