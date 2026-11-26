#include "PCGParamData.h"
#include "PCGMetadata.h"

UPCGParamData::UPCGParamData() {
    this->MetaData = CreateDefaultSubobject<UPCGMetadata>(TEXT("MetaData"));
    this->bHasCachedLastSelector = false;
}

UPCGParamData* UPCGParamData::K2_FilterParamsByName(const FName& InName) const {
    return NULL;
}

UPCGParamData* UPCGParamData::K2_FilterParamsByKey(int64 InKey) const {
    return NULL;
}

int64 UPCGParamData::FindOrAddMetadataKey(const FName& InName) {
    return 0;
}

int64 UPCGParamData::FindMetadataKey(const FName& InName) const {
    return 0;
}


