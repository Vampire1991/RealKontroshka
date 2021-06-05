
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class User
{
public:
	string login, password;
	User(string l, string p)
	{
		login = l;
		password = p;
	}
	User()
	{
		login = "";
		password = "";
	}
	void save_user_data()
	{
		ofstream of;
		if (login != "" & password != "")
		{
			of.open("user_" + login + "_data.txt");
			of << "User login is: " << login << endl;
			of << "User password is: " << password;
		}

	}

};

int main()
{
	User user("Petya", "Selyanin");
	User admin, bot;
	user.save_user_data();
	cout << user.login<<" "<<user.password;
	system("pause");
}
