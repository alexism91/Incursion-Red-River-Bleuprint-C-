#include "PCGCopyPointsSettings.h"

UPCGCopyPointsSettings::UPCGCopyPointsSettings() {
    this->RotationInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->bApplyTargetRotationToPositions = true;
    this->ScaleInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->bApplyTargetScaleToPositions = true;
    this->ColorInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->SeedInheritance = EPCGCopyPointsInheritanceMode::Relative;
    this->AttributeInheritance = EPCGCopyPointsMetadataInheritanceMode::SourceFirst;
    this->TagInheritance = EPCGCopyPointsTagInheritanceMode::Both;
    this->bCopyEachSourceOnEveryTarget = true;
    this->bMatchBasedOnAttribute = false;
}


