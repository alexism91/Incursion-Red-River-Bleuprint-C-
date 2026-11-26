#include "PCGApplyHierarchySettings.h"

UPCGApplyHierarchySettings::UPCGApplyHierarchySettings() {
    this->PointKeyAttributes.AddDefaulted(1);
    this->ParentKeyAttributes.AddDefaulted(1);
    this->ApplyParentRotation = EPCGApplyHierarchyOption::OptOutByAttribute;
    this->ApplyParentScale = EPCGApplyHierarchyOption::OptOutByAttribute;
    this->ApplyHierarchy = EPCGApplyHierarchyOption::Always;
    this->bWarnOnPointsWithInvalidParent = true;
}


