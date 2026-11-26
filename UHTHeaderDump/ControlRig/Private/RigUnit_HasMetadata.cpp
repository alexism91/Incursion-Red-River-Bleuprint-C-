#include "RigUnit_HasMetadata.h"

FRigUnit_HasMetadata::FRigUnit_HasMetadata() {
    this->Type = ERigMetadataType::Bool;
    this->Namespace = ERigMetaDataNameSpace::None;
    this->Found = false;
}

