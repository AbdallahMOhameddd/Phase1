#pragma once

#include<iostream>
#include"Person.h"
using namespace std;

class Client :public Person {
private:
	//att
	double balance;
public:
	//cons
	Client() {
		balance = 0;
	}
	Client(int id, string name, string password, double balance) :Person(id, name, password)
	{
		this->balance = balance;
	}
	//setter
	void SetBalance(double balance) {
		this->balance = balance;
		if (balance < 1500) {
			cout << " this salary not enough\n";
		}

	}
	void SetClientname()
	{
		this->name = name;
		cout << "Please Enter Your name (5 to 20 char) : ";
		getline(cin, name);


		if (name.length() < 5) {
			cout << "Name is too short\n ";

			return SetClientname();
		}
		else if (name.length() > 20) {
			cout << "Name is too long\n ";
			return SetClientname();
		}


	}
	void SetClientPass() {
		this->password = password;
		cout << "Please Enter Your password (8 to 20 char) : ";
		getline(cin, password);
		{
			if (password.length() < 8) {
				cout << "password is too short \n ";
				return SetClientPass();
			}
			else if (password.length() > 20) {
				cout << "password is too long \n";
				return SetClientPass();
			}
		}
	}
	void SetClientid()
	{

		cout << "Please Enter Your id  : ";
		cin >> id;
	}
	//getter
	double GetBalance()
	{
		return this->balance;

	}
	//method

	double deposit(double amount)
	{
		balance += amount;
		return balance;
	}
	double withdraw(double amount)
	{
		if (balance >= amount)
		{
			balance -= amount;
			return amount;
		}
		else
			cout << " amount exceeded balance\n";
	}

	double transferto(Client& recipient, double amount)
	{
		if (amount <= balance)
		{
			balance -= amount;
			recipient.deposit(amount);
			return balance;
		}
		else
		{
			cout << " amount exceeded balance\n";
		}
	}
	void display() {
		cout << "client id:       " << GetId() << endl;
		cout << "client name    : " << GetName() << endl;
		cout << "client password: " << GetPassword() << endl;
		cout << "client balance:  " << GetBalance() << endl;

	}
};

