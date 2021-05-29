
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
string data;
string tmp;
ifstream ifs;
ofstream ofs;
void A()
{
	ifs.open("123.txt");
	while (!ifs.eof())
	{
		getline(ifs,data);
	}
	ifs.close();
	ofs.open("1234.txt");
	{
		ofs << data;
	}
	ofs.close();
}
int main()
{
	ifs.open("123.txt");
	while (!ifs.eof())
	{
		getline(ifs, data);
	}
	ifs.close();
	ofs.open("1234.txt");
	{
		reverse(data.begin(), data.end());
		ofs << data;
	}
	ofs.close();
}

