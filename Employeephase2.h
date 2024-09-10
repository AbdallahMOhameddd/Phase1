#pragma once
#include<iostream>
#include<string>
#include"Person.h"
#include"Client.h"
#include "Validation.h"
#include "vector"
#include <iterator>
using namespace std;
class Employee :public Person {
private:
	//att
	double salary;
public:
	//cons
	Employee() :Person()
	{
		salary = 0;
	}
	Employee(int id, std::string name, std::string password, double salary) :Person(id, name, password)
	{
		this->salary = salary;
	}
	//setter	
	void setSalary(double salary) {
		if (Validation::validateSalary(salary)) {
			this->salary = salary;
		}
		else {
			std::cout << "Invalid salary" << std::endl;
		}
		//getter
		/*double getSalary() {
			return this->salary;

		}*/
		//methods
		
	}
	void AddClient(Client c)
	{
		vector<Client>client;
		client.push_back(c);
	}
	Client* searchClient(int id) {
	
		int i = 0;
		while (!allClients.empty()) {
			if (allClients[i].getId() == id)
			{

				return &allClients[i];
			}
			i++;
		}
		return NULL;
	}
	void Listclient()
	{
		for (int i = 0; i < allClients.size(); i++)
		{
			allClients[i].display();
			cout << "\n========================\n";
		}
	}
	void Editclient(int id, string name, string password, double balance)
	{
		int flag = -1;
		for (int i = 0; i < allClients.size(); i++) {

			if (allClients[i].getId() == id)
			{
				allClients[i].setName(name);
				allClients[i].setPassword(password);
				allClients[i].setBalance(balance);
				flag++;
			}

		}
		if (flag == -1)
		{
			cout << "This is not found\n";
		}

	}
	void display() {
		std::cout << "Employee id      : " << getId() << std::endl;
		std::cout << "Employee name    : " << getName() << std::endl;
		std::cout << "Employee password: " << getPassword() << std::endl;
		//std::cout << "Employee salary  : " << getsalary() << std::endl;
	}


};
static vector<Employee>allEmployee;