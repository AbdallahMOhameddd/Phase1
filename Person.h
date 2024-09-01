#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
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
	void setName(std::string name) {
		if (Validation::validatename(name))
			this->name = name;
		else std::cout << "Invalid name" <<std:: endl;
	}
	void setPassword(std::string passwrod) {
		if (Validation::validatepassword(password))
			this->password = passwrod;
		else std::cout << "Invalid password" << std::endl;
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

