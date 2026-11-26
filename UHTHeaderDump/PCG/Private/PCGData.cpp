#include "PCGData.h"

UPCGData::UPCGData() {
    this->UID = 0;
    this->MetaData = NULL;
}

UPCGMetadata* UPCGData::MutableMetadata() {
    return NULL;
}

UPCGMetadata* UPCGData::ConstMetadata() const {
    return NULL;
}


