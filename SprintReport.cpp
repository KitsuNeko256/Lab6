#include "SprintReport.h"

SprintReport::SprintReport(size_t _authorID) :
	SprintDraft(_authorID)
{ }
bool SprintReport::getDraftStatus(size_t draftAuthorID) {
	for (auto t : getSubordinateReports())
		if (t->getAuthorID() == draftAuthorID)
			return true;
	return false;
}
