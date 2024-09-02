#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class FileManager : public DataSource {
public:
    // Save client info to clients.txt
    void addClient(const Client& client) override {
        ofstream outFile("clients.txt", ios::app);
        if (outFile.is_open()) {
            outFile << client.GetId() << " " << client.GetName() << " " << client.GetPassword() << " " << client.GetBalance() << endl;
            outFile.close();
        }
    }

    // Save employee info to employees.txt
    void addEmployee(const Employee& employee) override {
        ofstream outFile("employees.txt", ios::app);
        if (outFile.is_open()) {
            outFile << employee.GetId() << " " << employee.GetName() << " " << employee.GetPassword() << " " << employee.GetSalary() << endl;
            outFile.close();
        }
    }

    // Save admin info to admins.txt
    void addAdmin(const Admin& admin) override {
        ofstream outFile("admins.txt", ios::app);
        if (outFile.is_open()) {
            outFile << admin.GetId() << " " << admin.GetName() << " " << admin.GetPassword() << " " << admin.GetPrivileges() << endl;
            outFile.close();
        }
    }

    // Retrieve all clients from clients.txt
    vector<Client> getAllClients() override {
        vector<Client> clients;
        ifstream inFile("clients.txt");
        if (inFile.is_open()) {
            int id;
            string name, password;
            double balance;
            while (inFile >> id >> name >> password >> balance) {
                clients.push_back(Client(id, name, password, balance));
            }
            inFile.close();
        }
        return clients;
    }

    // Retrieve all employees from employees.txt
    vector<Employee> getAllEmployees() override {
        vector<Employee> employees;
        ifstream inFile("employees.txt");
        if (inFile.is_open()) {
            int id;
            string name, password;
            double salary;
            while (inFile >> id >> name >> password >> salary) {
                employees.push_back(Employee(id, name, password, salary));
            }
            inFile.close();
        }
        return employees;
    }

    // Retrieve all admins from admins.txt
    vector<Admin> getAllAdmins() override {
        vector<Admin> admins;
        ifstream inFile("admins.txt");
        if (inFile.is_open()) {
            int id;
            string name, password;
            string privileges;
            while (inFile >> id >> name >> password >> privileges) {
                admins.push_back(Admin(id, name, password, privileges));
            }
            inFile.close();
        }
        return admins;
    }

    // Remove all data from clients.txt
    void removeAllClients() override {
        ofstream outFile("clients.txt", ios::trunc);
        outFile.close();
    }

    // Remove all data from employees.txt
    void removeAllEmployees() override {
        ofstream outFile("employees.txt", ios::trunc);
        outFile.close();
    }

    // Remove all data from admins.txt
    void removeAllAdmins() override {
        ofstream outFile("admins.txt", ios::trunc);
        outFile.close();
    }
};