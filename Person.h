#pragma once
#include <iostream>
#include <string>
class Person {
protected:
	//att
	int id;
	std::string name;
	std::string password;
public:
	//
	Person()
	{
		id = 0;
	}
	Person(int id, std::string name, std::string password)
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
	void SetName(std::string name)
	{
		this->name = name;
	}
	void SetPassword(std::string password)
	{
		this->password = password;
	}
	//getter
	int getId()
	{
		return this->id;
	}
	std::string getName()
	{
		return this->name;
	}
	std::string getPassword()
	{
		return this->password;
	}
};

