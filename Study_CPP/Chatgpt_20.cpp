#include "Chatgpt_20.h"
#include <vector>

int secondBigNumberCheck(vector<int> myVec)
{
	int first = 0;
	int second = 1;

	int check = 0;
	for (int i = 0; i < myVec.size(); i++)
	{
		if (myVec[i] > myVec[first])
		{
			second = first;
			first = i;
		}
		else if (myVec[i] == myVec[first])check++;
	}

	if (check == myVec.size())
		return -1;
	return second + 1;

	//1 2 3 4 5 

}

void Chatgpt_20()
{
	vector<int> myVec = { 5,4,3,2,1 };
	cout << "input : ";
	for (int i = 0; i < myVec.size(); i++)
		cout << myVec[i] << " ";
	cout << "\noutput : ";
	cout << secondBigNumberCheck(myVec);

	myVec = { 2,2,2,2,2 };
	cout << "\ninput : ";
	for (int i = 0; i < myVec.size(); i++)
		cout << myVec[i] << " ";
	cout << "\noutput : ";
	cout << secondBigNumberCheck(myVec);
	
}
