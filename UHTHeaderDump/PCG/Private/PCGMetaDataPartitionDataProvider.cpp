#include "PCGMetaDataPartitionDataProvider.h"

UPCGMetaDataPartitionDataProvider::UPCGMetaDataPartitionDataProvider() {
    this->Kernel = NULL;
    this->PartitionAttributeId = -1;
    this->NumInputData = 0;
    this->NumPartitions = 0;
    this->MaxAttributeValue = -1;
}


