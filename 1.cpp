
#include <iostream>
using namespace std;
int a, b, c;
int tmp1,tmp,prz;
int main()
{
	cin >> a >> b >> c;
	//наименьшее число
	
	if (a > b & a> c) { tmp = b; tmp1 = c; }
	else if (b > a & b > c) { a = tmp; tmp1 = c; }
	else if (c > a & c > b) { tmp1 = a; tmp = b; }
	else if (a==b & b==c) { tmp1 = a; tmp = b; }
	prz = tmp1 * tmp;
	cout << prz<<endl;
	system("pause");
}
