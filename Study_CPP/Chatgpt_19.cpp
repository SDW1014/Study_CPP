#include "Chatgpt_19.h"

void vecPrint(vector<int> thisVec)
{
	for (int i = 0; i < thisVec.size(); i += (int)sqrt(thisVec.size()))
	{
		for (int j = 0; j < (int)sqrt(thisVec.size()); j++)
		{
			cout << thisVec[i + j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < (int)sqrt(thisVec.size()); i++)
	{
		for (int j = 0; j < thisVec.size(); j += (int)sqrt(thisVec.size()))
		{
			cout << thisVec[i + j] << " ";
		}
		cout << endl;
	}
	/*
	123,456,789
	147,258,369
	*/
}


void Chatgpt_19()
{
	vector<int> myVec;
	string input;

	myVec = {1,2,3,4,5,6,7,8,9};

	vecPrint(myVec);
	
}
