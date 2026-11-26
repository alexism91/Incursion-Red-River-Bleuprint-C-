#include "RigVMTrait_OptimusDeformerSettings.h"

FRigVMTrait_OptimusDeformerSettings::FRigVMTrait_OptimusDeformerSettings() {
    this->ExecutionPhase = EOptimusDeformerExecutionPhase::AfterDefaultDeformer;
    this->ExecutionGroup = 0;
    this->DeformChildComponents = false;
}

