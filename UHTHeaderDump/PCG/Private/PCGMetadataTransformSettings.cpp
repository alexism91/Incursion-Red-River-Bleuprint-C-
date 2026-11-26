#include "PCGMetadataTransformSettings.h"

UPCGMetadataTransformSettings::UPCGMetadataTransformSettings() {
    this->Operation = EPCGMetadataTransformOperation::Compose;
    this->TransformLerpMode = EPCGTransformLerpMode::QuatInterp;
}


