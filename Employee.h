#pragma once
#include<iostream>
#include<string>
#include"Person.h"
#include"Client.h"
#include "Validation.h"
class Employee :public Person {
private:
	//att
	double salary;
public:
	//cons
	Employee():Person()
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
		else{
			std::cout << "Invalid salary" << std::endl;
	    }	
	//getter
		double getSalary() {
			return salary;
		}
	//methods
	void addClient(Client c){
		vector<Client>client;
		client.push_back(c);
	}
	void search(vector<Client>clients, int id) {
		int flag = -1;
		for (int i = 0; i < clients.size(); i++) {
			if (clients[i].getId() == id) {
				clients[i].display();
				flag++;
			}
		}
		if (flag == -1){
			cout << "This is not found\n";
		}
	}
	void listclient(vector<Client>clients){
		for (int i = 0; i < clients.size(); i++){
			clients[i].display();
			cout << "\n========================\n";
		}
	}
	void editclient(int id, string name, string password, double balance){
		vector<Client>c;
		int flag = -1;
		for (int i = 0; i < c.size(); i++) {

			if (c[i].getId() == id){
				c[i].setName(name);
				c[i].setPassword(password);
				c[i].setBalance(balance);
				flag++;
			}
		}
		if (flag == -1){
			cout << "This is not found\n";
		}
	}	
	void display() {
		std::cout << "Employee id      : " << getId() << std::endl;
		std::cout << "Employee name    : " << getName() << std::endl;
		std::cout << "Employee password: " << getPassword() << std::endl;
		std::cout << "Employee salary  : " << getsalary() << std::endl;
	}
};

