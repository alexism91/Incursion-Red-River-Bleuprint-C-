#include "PCGProjectionParams.h"

FPCGProjectionParams::FPCGProjectionParams() {
    this->bProjectPositions = false;
    this->bProjectRotations = false;
    this->bProjectScales = false;
    this->ColorBlendMode = EPCGProjectionColorBlendMode::SourceValue;
    this->AttributeMode = EPCGMetadataFilterMode::ExcludeAttributes;
    this->AttributeMergeOperation = EPCGMetadataOp::Min;
    this->TagMergeOperation = EPCGProjectionTagMergeMode::Source;
}

