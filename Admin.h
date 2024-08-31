#pragma once
#include"Employee.h"
class Admin :public Employee {
public:
	//cons
	/*Admin() {
		salary = 0;
	}*/
	Admin(int id, std::string name, std::string password, double salary) :Employee(id, name, password,salary){}	
	//setter
	/*void Setsalary(double salary) {
		if (salary < 5000)
		{
			std::cout << "this salary not enough\n";
		}
		else {
			this->salary = salary;
		}
	}*/
	/*void SetAdminname()
	{
		std::cout << "Please Enter Your name (5 to 20 char) : ";
		getline(std::cin, name);
		if (name.length() < 5) {
			std::cout << "Name is too short\n ";
		}
		else if (name.length() > 20) {
			std::cout << "Name is too long\n ";
		}
	}*/
	//void SetAdminPass() {
	//	std::cout << "Please Enter Your password (8 to 20 char) : ";
	//	getline(std::cin, password);
	//	if (password.length() < 8) {
	//		std::cout << "password is too short \n";
	//	}
	//	else if (password.length() > 20) {
	//		std::cout << "password is too long\n ";
	//	}
	//}
	//void SetAdminid()
	//{
	//	std::cout << "Please Enter Your id  : ";
	//	std::cin >> id;
	//}
	////getter
	//double getsalary()
	//{
	//	return this->salary;
	//}
	//method
	void display() {
		std::cout << "Admin id      : " << getId() << std::endl;
		std::cout << "Admin name    : " << getName() << std::endl;
		std::cout << "Admin password: " << getPassword() << std::endl;
		std::cout << "Admin salary  : " << getsalary() << std::endl;
	}
};

