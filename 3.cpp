
#include <iostream>
#include <ctime>
using namespace std;
int N,mas;
int maxnum;
int minnum,i;
int imin;
int imax;
int main()
{

	srand(time(0));
	cin >> N;
	int *mas = new int[N];
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 13;
	}
	//�� ��������� �����
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
	//������������ �����
	maxnum = mas[i];
	for (i = 0; i < N; i++)
	{
		
		if (maxnum < mas[i]) { maxnum = mas[i]; imax = i; }
	}
	// �����������
	minnum = mas[i];
	for (i = 0; i < N; i++)
	{
		
		if (minnum > mas[i]) { minnum = mas[i]; imin = i; }
	}
	mas[imax] = minnum;
	mas[imin] = maxnum;
	//����� ��������� �����
	cout << endl;
	cout << maxnum;
	cout << endl;
	cout << minnum;
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
	system("pause");
}
