#include "PCGGraphInstance.h"

UPCGGraphInstance::UPCGGraphInstance() {
    this->Graph = NULL;
}

bool UPCGGraphInstance::GraphAssetFilter(const FAssetData& AssetData) const {
    return false;
}


