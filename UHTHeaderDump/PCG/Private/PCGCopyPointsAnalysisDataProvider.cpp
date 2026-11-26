#include "PCGCopyPointsAnalysisDataProvider.h"

UPCGCopyPointsAnalysisDataProvider::UPCGCopyPointsAnalysisDataProvider() {
    this->Settings = NULL;
    this->MatchAttributeId = -1;
    this->SelectedFlagAttributeId = -1;
    this->bCopyEachSourceOnEveryTarget = true;
}


