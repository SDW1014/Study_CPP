#include "Chatgpt_4.h"

void Chatgpt_4()
{
	int number;
	std::cout << "짝수인지 홀수인지 나타내는 프로그램입니다." << std::endl;
	std::cout << "숫자를 입력해 주세요 : ";
	std::cin >> number;
	switch (number%2) 
	{
	case 0: 
		std::cout << "짝수";
		break;
	case 1: 
		std::cout << "홀수";
		break;
	}
}

void Chatgpt_4_1()
{
	int n;
	std::cout << "번호를 입력해 : ";
	std::cin >> n;
	std::cout << (n % 2 == 0 ? "짝수" : "홀수");
}
