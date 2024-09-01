#pragma once
#include<iostream>
#include"Employee.h"
#include"Client.h"
#include "Validation.h"
class Admin :public Employee {
public:
	//cons
	Admin() : Employee() {};
	
	Admin(int id, std::string name, std::string password, double salary) :Employee(id, name, password,salary){}
	void AddClient(Client c){
		std::vector<Client>client;
		client.push_back(c);
	}
	void SearchClient(std::vector<Client> clients, int id) {
		if (clients.size() > 0) {
			int flag = -1;
			for (int i = 0; i < clients.size(); i++) {
				if (clients[i].getId() == id) {
					clients[i].display();
					flag++;
				}
			}
			if (flag == -1)	{
				std::cout << "This is not found\n";
			}
		}
	}
	void Listclient(std::vector<Client>clients){
		for (int i = 0; i < clients.size(); i++)
		{
			clients[i].display();
			std::cout << "\n========================\n";
		}
	}
	void Editclient(int id, std::string name, std::string password, double balance){
		std::vector<Client>c;
		int flag = -1;
		for (int i = 0; i < c.size(); i++) {
			if (c[i].getId() == id){
				c[i].setName(name);
				c[i].setPassword(password);
				c[i].setBalance(balance);
				flag++;
			}
		}
		if (flag == -1)	{
			std::cout << "This is not found\n";
		}
	}
	void AddEmployee(Employee& e){
		std::vector<Employee>employee;
		employee.push_back(e);
	}
	void Search(std::vector<Employee>employee, int id) {
		int flag = -1;
		for (int i = 0; i < employee.size(); i++) {

			if (employee[i].getId() == id) {
				employee[i].display();
				flag++;
			}
		}
		if (flag == -1)		{
			std::cout << "This is not found\n";
		}
	}
	void Editemployee(int id, std::string name,std:: string password, double salary){
		std::vector<Employee>e;
		int flag = -1;
		for (int i = 0; i < e.size(); i++) {
			if (e[i].getId() == id){
				e[i].setName(name);
				e[i].setPassword(password);
				e[i].setSalary(salary);
				flag++;
			}
		}
		if (flag == -1){
			std::cout << "This is not found\n";
		}
	}
	void listemployee(std::vector<Employee>employee){
		for (int i = 0; i < employee.size(); i++){
			employee[i].display();
			std::cout << "\n========================\n";
		}
	}	
	void display() {
		std::cout << "Admin id      : " << getId() << std::endl;
		std::cout << "Admin name    : " << getName() << std::endl;
		std::cout << "Admin password: " << getPassword() << std::endl;
		std::cout << "Admin salary  : " << getsalary() << std::endl;
	}
};

