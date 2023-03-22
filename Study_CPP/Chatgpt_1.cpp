#include <iostream>

void Chatgpt_1() 
{
	int i, j;
	std::cout << "정수를 입력해 주세요 : ";
	std::cin >> i;
	std::cout << "다음 정수를 입력해 주세요 :";
	std::cin >> j;

	std::cout << "합 :" << i + j << std::endl;
	std::cout << "차 :" << i - j << std::endl;
	std::cout << "곱 :" << i * j << std::endl;
	std::cout << "몫 :" << i / j << std::endl;

}