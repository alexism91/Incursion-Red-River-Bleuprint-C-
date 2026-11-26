#include "DataAssetLink.h"

UDataAssetLink::UDataAssetLink() {
    this->DataAssetCached = NULL;
}

void UDataAssetLink::SetDataAsset(TSoftObjectPtr<UDataAsset> InDataAsset) {
}

TSoftObjectPtr<UDataAsset> UDataAssetLink::GetDataAsset() const {
    return NULL;
}


