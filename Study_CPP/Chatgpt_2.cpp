#include "Chatgpt_2.h"
#include <iostream>

using namespace std;

void Chatgpt_2()
{
	int i, j;
	cout << "1번 변의 크기를 알려주세요 : ";
	cin >> i; 
	cout << "2번 변의 크기를 알려주세요 : ";
	cin >> j;

	cout << "직사각형의 넓이는 : " << i * j << endl;
	cout << "직사각형의 둘레는 : " << 2 * i + 2 * j << endl;
}