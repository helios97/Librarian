#include "account.h"
#include"stdafx.h"


account::account(string s)
{
	//	throw gcnew system::notimplementedexception();
	int index = s.find("|");//tra ve vi tri dau tien khi thay /
	this->user = s.substr(0, index);
	this->password = s.substr(index + 1);
}
string account::getuser()
{
	return this->user;
}

string account::getpassword()
{
	return this->password;
}

void account::setaccount(string users, string pass)
{
	//throw gcnew system::notimplementedexception();
	this->user = users;
	this->password = pass;
}
istream &operator >> (istream &is, account &t) {
	cout << "Enter user:"; is >> t.user;
	cout << "Enter password:"; is >> t.password;
	return is;
}
ostream &operator << (ostream &os, account &t) {
	os << t.user << "|" << t.password << endl;
	return os;
}



