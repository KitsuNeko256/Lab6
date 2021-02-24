#include "TeamleadWrapper.h"

Employee* TeamleadWrapper::getEmployee() {
	return teamlead;
}
void TeamleadWrapper::setEmployee(Employee* newTeamlead) {
	teamlead = newTeamlead;
}
void TeamleadWrapper::startNewSprintSprint() {
	sprintReport = new SprintReport(teamlead->getID());
}
SprintReport* TeamleadWrapper::getSprintReport() {
	return sprintReport;
}
