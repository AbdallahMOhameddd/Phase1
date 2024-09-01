#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Client {

public:
    int GetId() const;
    string GetName() const;
    string GetPassword() const;
    double GetBalance() const;
    // Additional necessary member functions
};

class Employee {

public:
    int GetId() const;
    string GetName() const;
    string GetPassword() const;
    double GetSalary() const;
    // Additional necessary member functions
};

class Admin {

public:
    int GetId() const;
    string GetName() const;
    string GetPassword() const;
    // Additional necessary member functions
};

class FilesHelper {
public:

    static void saveLast(string fileName, int id) {
        ofstream outFile(fileName, ios::trunc);
        if (outFile.is_open()) {
            outFile << id;
            outFile.close();
        }
        else {
            cerr << "Unable to open file " << fileName << endl;
        }
    }


    static int getLast(string fileName) {
        ifstream inFile(fileName);
        int id = -1;
        if (inFile.is_open()) {
            inFile >> id;
            inFile.close();
        }
        else {
            cerr << "Unable to open file " << fileName << endl;
        }
        return id;
    }


    static void saveClient(Client c) {
        ofstream outFile("clients.txt", ios::app);
        if (outFile.is_open()) {
            outFile << c.GetId() << "," << c.GetName() << "," << c.GetPassword() << "," << c.GetBalance() << endl;
            outFile.close();
        }
        else {
            cerr << "Unable to open file clients.txt" << endl;
        }
    }


    static void saveEmployee(string fileName, string lastIdFile, Employee e) {
        ofstream outFile(fileName, ios::app);
        if (outFile.is_open()) {
            outFile << e.GetId() << "," << e.GetName() << "," << e.GetPassword() << "," << e.GetSalary() << endl;
            outFile.close();
            saveLast(lastIdFile, e.GetId());
        }
        else {
            cerr << "Unable to open file " << fileName << endl;
        }
    }


    static void getClients() {
        ifstream inFile("clients.txt");
        string line;
        if (inFile.is_open()) {
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        }
        else {
            cerr << "Unable to open file clients.txt" << endl;
        }
    }

    static void getEmployees() {
        ifstream inFile("employees.txt");
        string line;
        if (inFile.is_open()) {
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        }
        else {
            cerr << "Unable to open file employees.txt" << endl;
        }
    }


    static void getAdmins() {
        ifstream inFile("admins.txt");
        string line;
        if (inFile.is_open()) {
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        }
        else {
            cerr << "Unable to open file admins.txt" << endl;
        }
    }


    static void clearFile(string fileName, string lastIdFile) {
        ofstream outFile(fileName, ios::trunc);
        if (outFile.is_open()) {
            outFile.close();
            saveLast(lastIdFile, 0);
        }
        else {
            cerr << "Unable to open file " << fileName << endl;
        }
    }
};
