
#include <iostream>
#include "ctime"//
using namespace std;
int sumelem(int mas[3][3])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += mas[i][j];
		}
		//cout << endl;
	}
	return sum;
}
int main()
{
	
	setlocale(0, "");
	srand(time(0));//—брос времени
	int A[3][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = rand() % 13;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	
	cout << sumelem(A);
	system("pause");
}
