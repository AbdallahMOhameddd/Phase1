#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include"Person.h"
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
class Parser {
public:
	static std::vector<std::string> read_from_file(std::string filename);
		
	static std::vector<std::string> split(std::string line);
		

	static Client parse_to_client(std::string line);		

	static Employee parse_to_employee(std::string line);
	
	static Admin parse_to_admin(std::string line);		

};

