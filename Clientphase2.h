#pragma once
#include<iostream>
#include<string>
#include"Person.h"
#include "Validation.h"
#include <vector>
#include <iterator>
class Client :public Person {
private:
	//att
	double balance;
public:
	//cons
	Client() :Person() {
		balance = 0;
	}
	Client(int id, std::string name, std::string password, double balance) :Person(id, name, password)
	{
		this->balance = balance;
	}
	//setter	
	void setBalance(double balance) {
		if (Validation::validateBalance(balance))
			this->balance = balance;
		else
		{
			std::cout << "Invalid balance\n";
		}
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
static  std::vector<Client>allClients;


