#pragma once
#include <string>
#ifndef phonebook
#define phonebook
using namespace std;

class phonebook
{
private:
	string name;
	string phonenum;

public:
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();
};

#endif
