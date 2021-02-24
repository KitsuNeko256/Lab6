#pragma once
#include "TeamleadWrapper.h"

class EmployeeList {
	TeamleadWrapper teamlead;

	static Employee* getEmployee(size_t ID, Employee* cur);
	static Employee* getEmployee(std::string name, Employee* cur);

	void setTeamlead(Employee* newTeamlead);

	void print(Employee* cur, int space);
public:
	bool addEmployee(size_t ID, std::string name, int managerID);
	bool setManager(size_t employeeID, int managerID);

	Employee* getEmployee(size_t ID);
	Employee* getEmployee(std::string name);
	TeamleadWrapper& getTeamlead();

	void print();
};
