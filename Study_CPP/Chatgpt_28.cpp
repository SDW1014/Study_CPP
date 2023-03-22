#include "Chatgpt_28.h"
#include <algorithm>
void reverseString_Chatgpt_28(string inputMyString)
{
	for (int i = inputMyString.size() - 1; i >= 0; i--)
	{
		cout << inputMyString[i];
	}
}
void reverseString_Chatgpt_28_2(string inputMyString)
{
	reverse(inputMyString.begin(), inputMyString.end());

	cout << inputMyString;
}

string inputString_Chatggpt_28()
{
	string myString;
	cout << "¹®Àå ³Ö¾îÁà : ";
	getline(cin, myString);
	return myString;
}

void Chatgpt_28()
{
	reverseString_Chatgpt_28_2(inputString_Chatggpt_28());
}
