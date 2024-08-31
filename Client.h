#pragma once
#include<iostream>
#include<string>
#include"Person.h"
class Client :public Person {
private:
	//att
	double balance;
public:
	//cons
	Client() {
		balance = 0;
	}
	Client(int id, std::string name, std::string password, double balance) :Person(id, name, password)
	{
		this->balance = balance;
	}
	//setter
	void SetBalance(double balance) {
		if (balance < 1500) {
			std::cout << " this balance is not enough\n";
		}
		else {
			this->balance = balance;
		}
	}
	void SetClientName()
	{
		std::cout << "Please Enter Your name (5 to 20 char) : ";
		getline(std::cin, name);

		if (name.length() < 5) {
			std::cout << "Name is too short\n ";
		}
		else if (name.length() > 20) {
			std::cout << "Name is too long\n ";
		}
	}
	void SetClientPass() {
		std::cout << "Please Enter Your password (8 to 20 char) : ";
		getline(std::cin, password);
		{
			if (password.length() < 8) {
				std::cout << "password is too short \n ";
				return SetClientPass();
			}
			else if (password.length() > 20) {
				std::cout << "password is too long \n";
				return;
			}
		}
	}
	void SetClientId()
	{
		std::cout << "Please Enter Your id  : ";
		std::cin >> id;
	}
	//getter
	double getBalance()
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
			std::cout << " amount exceeded balance\n";
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
			std::cout << " amount exceeded balance\n";
		}
	}
	void display() {		
		std::cout << "client id: " << getId() << std::endl;
		std::cout << "client name: " << getName() << std::endl;
		std::cout << "client password: " << getPassword() << std::endl;
		std::cout << "client balance: " << getBalance() << std::endl;

	}
};

