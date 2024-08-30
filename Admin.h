#pragma once

#include<iostream>
#include"Employee.h"
using namespace std;
class Admin :public Employee {
private:
	//att
	double salary;
public:
	//cons
	Admin() {
		salary = 0;
	}
	Admin(int id, string name, string, double salary) :Employee(id, name, password, salary)
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
	void SetAdminname()
	{
		this->name = name;
		cout << "Please Enter Your name (5 to 20 char) : ";
		getline(cin, name);
		if (name.length() < 5) {
			cout << "Name is too short\n ";
			return SetAdminname();
		}
		else if (name.length() > 20) {
			cout << "Name is too long\n ";
			return SetAdminname();
		}


	}
	void SetAdminPass() {

		this->password = password;
		cout << "Please Enter Your password (8 to 20 char) : ";
		getline(cin, password);
		{
			if (password.length() < 8) {
				cout << "password is too short \n";
				return SetAdminPass();
			}
			else if (password.length() > 20) {
				cout << "password is too long\n ";
				return SetAdminPass();
			}
		}
	}
	void SetAdminid()
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


	//*** Get All Clients from the file to work on it
	vector<Client> GetClients() {
		//read file
		//return clients
	}


	void display() {
		cout << "Admin id      : " << GetId() << endl;
		cout << "Admin name    : " << GetName() << endl;
		cout << "Admin password: " << GetPassword() << endl;
		cout << "Admin salary  : " << Getsalary() << endl;

	}
	void AddClient(Client c)
	{
		vector<Client>client;
		client.push_back(c);
	}



	Client SearchClient( int id) {
		vector<Client> clients = GetClients();
		if (clients.size() > 0) {
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
		
	}
	void Listclient(vector<Client>clients)
	{
		for (int i = 0; i < clients.size(); i++)
		{
			clients[i].display();
			cout << "\n========================\n";
		}
	}
	void Editclient(int id, string name, string password, double balance)
	{
		vector<Client>c;
		int sum = -1;
		for (int i = 0; i < c.size(); i++) {

			if (c[i].GetId() == id)
			{
				c[i].GetName() = name;
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
	void AddEmployee(Employee &e)
	{
		vector<Employee>employee;
		employee.push_back(e);
	}

	void Search(vector<Employee>employee, int id) {
		int sum = -1;
		for (int i = 0; i < employee.size(); i++) {

			if (employee[i].GetId() == id) {
				employee[i].display();
				sum++;
			}
		}
		if (sum == -1)
		{
			cout << "This is not found\n";
		}
	}
	
	void Editemployee(int id, string name, string password, double salary)
	{
		vector<Employee>e;
		int sum = -1;
		for (int i = 0; i < e.size(); i++) {

			if (e[i].GetId() == id)
			{
				e[i].GetName() = name;
				e[i].GetPassword() = password;
				//e[i].???Getsalary() = salary;
				sum++;
			}

		}
		if (sum == -1)
		{
			cout << "This is not found\n";
		}

	}
	void listemployee(vector<Employee>employee)
	{
		for (int i = 0; i < employee.size(); i++)
		{
			employee[i].display();
			cout << "\n========================\n";
		}
	}


};

