
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class User
{
public:
	string login, password;
	User(string login, string password);
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
			of.open("user_"+login+"_data.txt");
			of << "User login is: " << login<<endl;
			of << "User password is: " << password;
		}

	}

};
User user;
int main()
{
	user.login = "petya";
	user.password = "selyanin";
	user.save_user_data();
	cout << user.login;
	system("pause");
}
