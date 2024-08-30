#pragma once

#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include "Client.h"
using namespace std;
class Employee :public Person {
private:
	//att
	double salary;
public:
	//cons
	Employee() {
		salary = 0;
	}
	Employee(int id, string name, string password, double salary) :Person(id, name, password)
	{
		this->salary = salary;
	}
	//setter
	void Setsalary(double salary) {
		if (salary < 5000)
		{
			cout << "this salary not enough\n";
		}
		this->salary = salary;

	}
	void SetEmployeename()
	{
		this->name = name;
		cout << "Please Enter Your name (5 to 20 char) : ";
		getline(cin, name);
		if (name.length() < 5) {
			cout << "Name is too short ";
			return SetEmployeename();
		}
		else if (name.length() > 20) {
			cout << "Name is too long ";
			return SetEmployeename();
		}


	}
	void SetEmployeePass() {

		this->password = password;
		cout << "Please Enter Your password (8 to 20 char) : ";
		getline(cin, password);
		{
			if (password.length() < 8) {
				cout << "password is too short\n ";
				return SetEmployeePass();
			}
			else if (password.length() > 20) {
				cout << "password is too long \n";
				return SetEmployeePass();
			}
		}
	}
	void SetEmployeeid()
	{

		cout << "Please Enter Your id  : ";
		cin >> id;
	}
	//getter
	double Getsalary()
	{

		return this->salary;

	}
	//method



	void display() {
		cout << "Employee id      : " << GetId() << endl;
		cout << "Employee name    : " << GetName() << endl;
		cout << "Employee password: " << GetPassword() << endl;
		cout << "Employee salary  : " << Getsalary() << endl;
		
	}
	void addClient(Client c)
	{
		vector<Client>client;
		client.push_back(c);
	}

	void search(vector<Client>clients ,int id) {
		int sum = -1;
		for (int i = 0; i < clients.size(); i++) {
			
			if (clients[i].GetId() == id) {
				clients[i].display();
				sum++;
			}
		}
		if (sum == -1)
		{
			cout << "This is not found\n";
		}
	}
	void listclient(vector<Client>clients)
	{
		for (int i = 0; i < clients.size(); i++)
		{
			clients[i].display() ;
			cout << "\n========================\n";
		}
	}
	void editclient(int id, string name, string password, double balance)
	{
		vector<Client>c;
		int sum = -1;
		for (int i = 0; i < c.size(); i++) {

			if (c[i].GetId() == id)
			{
				c[i].GetName()=name;
				c[i].GetPassword() = password;
		    	//c[i].GetBalance()= balance;
				sum++;
			}

		}
		if (sum == -1)
		{
			cout << "This is not found\n";
		}
		
	}

};


