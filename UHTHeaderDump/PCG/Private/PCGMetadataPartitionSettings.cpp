#include "PCGMetadataPartitionSettings.h"

UPCGMetadataPartitionSettings::UPCGMetadataPartitionSettings() {
    this->PartitionAttributeSelectors.AddDefaulted(1);
    this->bTokenizeOnWhiteSpace = false;
    this->bAssignIndexPartition = false;
    this->bDoNotPartition = true;
    this->PartitionIndexAttributeName = TEXT("PartitionIndex");
}


