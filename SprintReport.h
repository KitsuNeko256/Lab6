#pragma once
#include "SprintDraft.h"

class SprintReport : public SprintDraft {
public:
	SprintReport(size_t _authorID);

	bool getDraftStatus(size_t draftAuthorID);
};
