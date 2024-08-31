#include "Parser.h"

	
 std::vector<std::string> Parser::read_from_file(std::string filename) {
	std::ifstream file(filename);
	std::vector<std::string> lines;
	if (!file.is_open()) {
		std::cout << "can not open file " << filename << std::endl;		
	}
	std::string line;
	while (getline(file, line)) {
		lines.push_back(line);
	}
	file.close();
	return lines;
}
 std::vector<std::string> Parser::split(std::string line) {
	std::vector<std::string> tokens;	
	std::stringstream ss(line);
	std::string data;
	while (getline(ss, data, '#')) {
		tokens.push_back(data);
	}
	return tokens;
}

 Client Parser::parse_to_client(std::string line) {
	std::vector<std::string> tokens = split(line);
	int id = stoi(tokens[0]);
	std::string name = tokens[1];
	std::string password = tokens[2];
	double balance = stod(tokens[3]);
	return Client(id, name, password, balance);
}

Employee Parser::parse_to_employee(std::string line) {
	std::vector<std::string> tokens = split(line);
	int id = stoi(tokens[0]);
	std::string name = tokens[1];
	std::string password = tokens[2];
	double salary = stod(tokens[3]);
	return Employee(id, name, password, salary);
}
 Admin Parser::parse_to_admin(std::string line) {
	std::vector<std::string> tokens = split(line);
	int id = stoi(tokens[0]);
	std::string name = tokens[1];
	std::string password = tokens[2];
	double salary = stod(tokens[3]);
	return Admin(id, name, password, salary);
}