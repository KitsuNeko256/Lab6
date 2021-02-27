#pragma once

#include "Employee.h"
#include "SprintReport.h"

class TeamleadWrapper {
    Employee *teamlead = nullptr;
    SprintReport *sprintReport;

public:
    Employee *getEmployee();

    void setEmployee(Employee *newTeamlead);

    void startNewSprintSprint();

    SprintReport *getSprintReport();
};
	