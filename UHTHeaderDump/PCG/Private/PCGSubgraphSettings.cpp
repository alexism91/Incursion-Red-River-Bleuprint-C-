#include "PCGSubgraphSettings.h"
#include "PCGGraphInstance.h"

UPCGSubgraphSettings::UPCGSubgraphSettings() {
    this->SubgraphInstance = CreateDefaultSubobject<UPCGGraphInstance>(TEXT("PCGSubgraphInstance"));
    this->SubgraphOverride = NULL;
}

bool UPCGSubgraphSettings::SubgraphAssetFilter(const FAssetData& AssetData) const {
    return false;
}


