#include "SprintDraft.h"

SprintDraft::SprintDraft(size_t _authorID) : 
	Report(_authorID) 
{ }
void SprintDraft::addSubordinateReport(SprintDraft* report) {
	subordinateReports.push_back(report);
}
const std::vector<SprintDraft*>& SprintDraft::getSubordinateReports() {
	return subordinateReports;
}
