#include "RigUnit_HierarchyAddControlTransform_Settings.h"

FRigUnit_HierarchyAddControlTransform_Settings::FRigUnit_HierarchyAddControlTransform_Settings() {
    this->InitialSpace = ERigVMTransformSpace::LocalSpace;
    this->bUsePreferredRotationOrder = false;
    this->PreferredRotationOrder = EEulerRotationOrder::XYZ;
}

