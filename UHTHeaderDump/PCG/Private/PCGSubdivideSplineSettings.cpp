#include "PCGSubdivideSplineSettings.h"

UPCGSubdivideSplineSettings::UPCGSubdivideSplineSettings() {
    this->bAcceptIncompleteSubdivision = false;
    this->bModuleHeightAsAttribute = false;
    this->ModuleHeight = 100.00f;
    this->bOutputModuleIndexAttribute = false;
    this->ModuleIndexAttributeName = TEXT("ModuleIndex");
    this->bOutputExtremityAttributes = false;
    this->IsFirstAttributeName = TEXT("IsFirst");
    this->IsFinalAttributeName = TEXT("IsFinal");
    this->ModulePlacementTolerance = 0.01f;
}


