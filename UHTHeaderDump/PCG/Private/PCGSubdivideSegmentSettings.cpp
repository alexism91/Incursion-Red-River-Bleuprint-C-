#include "PCGSubdivideSegmentSettings.h"

UPCGSubdivideSegmentSettings::UPCGSubdivideSegmentSettings() {
    this->SubdivisionAxis = EPCGSplitAxis::X;
    this->bFlipAxisAsAttribute = false;
    this->bShouldFlipAxis = false;
    this->bAcceptIncompleteSubdivision = false;
    this->bOutputModuleIndexAttribute = false;
    this->ModuleIndexAttributeName = TEXT("ModuleIndex");
    this->bOutputExtremityAttributes = false;
    this->IsFirstAttributeName = TEXT("IsFirst");
    this->IsFinalAttributeName = TEXT("IsFinal");
    this->bOutputExtremityNeighborIndexAttribute = false;
    this->ExtremityNeighborIndexAttributeName = TEXT("ExtremityNeighborIndex");
}


