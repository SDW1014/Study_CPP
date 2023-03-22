#include "Chatgpt_14.h"

using namespace std;

bool isPrime(int prime)
{
	if (prime > 1&&prime <= 3)
		return true;

	if (prime % 2 != 0 && prime % 3 != 0)
	{
		return true;
	}
	return false;
}
void Chatgpt_14()
{
	int n;
	cout << "프라임 넘버를 구분하는 함수를 만들어 보겠습니다." << endl;
	cout << "정수를 입력 하시오 : ";
	cin >> n;

	if (isPrime(n))
	{
		cout << "프라임 넘버";
	}
}
