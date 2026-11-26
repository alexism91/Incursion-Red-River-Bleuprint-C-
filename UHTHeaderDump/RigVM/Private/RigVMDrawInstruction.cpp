#include "RigVMDrawInstruction.h"

FRigVMDrawInstruction::FRigVMDrawInstruction() {
    this->PrimitiveType = ERigVMDrawSettings::Points;
    this->Thickness = 0.00f;
    this->DepthPriority = SDPG_World;
    this->LifeTime = 0.00f;
}

