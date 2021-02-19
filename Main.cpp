#include "UI.h"

int main() {
	EmployeeList employeeList;
	TaskList taskList;
	ReportList reportList;
	employeeList.addEmployee(1, "Yulia", -1);
	employeeList.addEmployee(2, "Daria", 1);
	employeeList.addEmployee(3, "Valeria", 2);
	employeeList.addEmployee(4, "Anastasia", 1);

	UI ui(&employeeList, &taskList, &reportList);
	ui.mainMenu();

	system("pause");
	return 0;
}
