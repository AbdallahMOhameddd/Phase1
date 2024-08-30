#include <iostream>
#include <string>
#include"Person.h"
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector<Client>c;


	Client c1,c2(147,"mohamed","02241365",90000), c3(123, "ahlam", "12365479", 10000);
	/*c1.SetClientname();
	c1.SetClientPass();
	c1.SetClientid();
	c1.SetBalance(5000);*/
	//c1.display();
	cout << "\n============================\n";
	
	/*c.push_back(c1);
	c.push_back(c2);
	c.push_back(c3);*/
	
	//ofstream Clients;
	//Clients.open("Clients.txt",ios ::out | ios ::app);
	//
		//Clients << c1.GetId() << "&" << c1.GetName() << "&" << c1.GetPassword() << "&" << c1.GetBalance()<<endl;
		//Clients << c2.GetId() << "&" << c2.GetName() << "&" << c2.GetPassword() << "&" << c2.GetBalance()<<endl;
	    //Clients << c3.GetId() << "&" << c3.GetName() << "&" << c3.GetPassword() << "&" << c3.GetBalance() << endl;

		//Clients.close();
		ifstream data;
		data.open("Clients.txt");
		string client1, client2, client3;
		data >> client1 >> client2 >> client3;
		cout << client1 << endl;
	cout << "======================\n";
	
	//Employee  e1,e2;
	//e1.listclient(c);
	//e1.editclient(123, "maher", "23698547",54123);
	/*e1.SetEmployeename();
	e1.SetEmployeePass();
	e1.SetEmployeeid();
	e1.Setsalary(5400);
	e1.display();
	cout << "\n==========================\n";
	e2.SetEmployeename();
	e2.SetEmployeePass();
	e2.SetEmployeeid();
	e2.Setsalary(7500);
	e2.display();
	e1.addClient(c3);
	e1.search(c, 789);
	ofstream Employee;
	Employee.open("Employee.txt", ios::out | ios::app);

	Employee << e1.GetId() << "&" << e1.GetName() << "&" << e1.GetPassword() << "&" << e1.Getsalary() << endl;
	Employee << e2.GetId() << "&" << e2.GetName() << "&" << e2.GetPassword() << "&" << e2.Getsalary() << endl;
	Employee.close();

	cout << "======================\n";

	Admin a1,a2;
	a1.SetAdminname();
	a1.SetAdminPass();
	a1.SetAdminid();
	a1.Setsalary(5800);
	a1.display();
	cout << "\n==========================\n";
	a2.SetAdminname();
	a2.SetAdminPass();
	a2.SetAdminid();
	a2.Setsalary(5800);
	a2.display();
	ofstream Admin;
	Admin.open("Admin.txt", ios::out | ios::app);

	Admin << a1.GetId() << "&" << a1.GetName() << "&" <<a1.GetPassword() << "&" << a1.Getsalary() << endl;
	Admin << a2.GetId() << "&" << a2.GetName() << "&" << a2.GetPassword() << "&" << a2.Getsalary() << endl;
	Admin.close();*/
}
