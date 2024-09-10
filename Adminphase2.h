#pragma once
#include<iostream>
#include"Employee.h"
#include"Client.h"
#include "Validation.h"
#include <vector>
#include "Employee.h"

class Admin :public Employee {
public:
	//cons
	Admin() : Employee() {};

	Admin(int id, std::string name, std::string password, double salary) :Employee(id, name, password, salary) {}
	//mehods

	void AddClient(Client& c)
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

	void AddEmployee(Employee& e) {
		
		allEmployee.push_back(e);
	}

	Employee* searemployee(int id) {

		int i = 0;
		while (!allEmployee.empty()) {
			if (allEmployee[i].getId() == id)
			{

				return &allEmployee[i];
			}
			i++;
		}
		return NULL;
	}
	void Editemployee(int id, std::string name, std::string password, double salary) {

		int flag = -1;
		for (int i = 0; i < e.size(); i++) {
			if (e[i].getId() == id) {
				e[i].setName(name);
				e[i].setPassword(password);
				e[i].setSalary(salary);
				flag++;
			}
		}
		if (flag == -1) {
			std::cout << "This is not found\n";
		}
	}
	void listemployee() {
		for (int i = 0; i < allEmployee.size(); i++) {
			allEmployee[i].display();
			std::cout << "\n========================\n";
		}
	}
	void display() {
		std::cout << "Admin id      : " << getId() << std::endl;
		std::cout << "Admin name    : " << getName() << std::endl;
		std::cout << "Admin password: " << getPassword() << std::endl;
		//std::cout << "Admin salary  : " << getsalary()<< std::endl;
	}
};

