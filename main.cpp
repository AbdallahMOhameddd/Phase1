#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	//att
	int id;
	string name, password;
public:
	//
	Person()
	{
		id = 0;
	}
	Person(int id, string name, string password)
	{
		this->id = id;
		this->name = name;
		this->password = password;

	}
	//setter
	void setid(int id)
	{
		this->id = id;

	}
	void SetName(string name)
	{
		this->name = name;
	}
	void SetPassword(string password)
	{
		this->password = password;

	}
	//getter
	int GetId()
	{
		return this->id;

	}
	string GetName()
	{
		return this->name;

	}
	string GetPassword()
	{
		return this->password;
	}

};
class Client :public Person {
private:
	//att
	double balance;
public:
	//cons
	Client() {
		balance = 0;
	}
	Client(int id, string name, string, double balance) :Person(id, name, password)
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
};
class Admin :public Employee {
private:
	//att
	double salary;
public:
	//cons
	Admin() {
		salary = 0;
	}
	Admin(int id, string name, string, double salary) :Employee( id,  name ,password , salary)
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



	void display() {
		cout << "Admin id      : " << GetId() << endl;
		cout << "Admin name    : " << GetName() << endl;
		cout << "Admin password: " << GetPassword() << endl;
		cout << "Admin salary  : " << Getsalary() << endl;

	}
};

int main() {
	Client c;
	c.SetClientname();
	c.SetClientPass();
	c.SetClientid();
	c.SetBalance(5000);
	c.display();
	cout << "======================\n";

	Employee  e;
	e.SetEmployeename();
	e.SetEmployeePass();
	e.SetEmployeeid();
	e.Setsalary(5400);
	e.display();
	cout << "======================\n";

	Admin a;
	a.SetAdminname();
	a.SetAdminPass();
	a.SetAdminid();
	a.Setsalary(5800);
	a.display();

}
