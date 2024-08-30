#pragma once

#include<iostream>
#include<string>

using namespace std;
class Person
{
protected:
	//att
	int id;
	string name, password;
public:
	//
	Person()
	{
		id = 0;
	}
	Person(int id, string name, string password)
	{
		this->id = id;
		this->name = name;
		this->password = password;

	}
	//setter
	void setid(int id)
	{
		this->id = id;

	}
	void SetName(string name)
	{
		this->name = name;
	}
	void SetPassword(string password)
	{
		this->password = password;

	}
	//getter
	int GetId()
	{
		return this->id;

	}
	string GetName()
	{
		return this->name;

	}
	string GetPassword()
	{
		return this->password;
	}

};


