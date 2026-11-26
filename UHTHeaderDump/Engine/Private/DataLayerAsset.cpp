#include "DataLayerAsset.h"

UDataLayerAsset::UDataLayerAsset() {
    this->DataLayerType = EDataLayerType::Editor;
    this->bSupportsActorFilters = false;
    this->LoadFilter = EDataLayerLoadFilter::None;
}

bool UDataLayerAsset::IsServerOnly() const {
    return false;
}

bool UDataLayerAsset::IsRuntime() const {
    return false;
}

bool UDataLayerAsset::IsClientOnly() const {
    return false;
}

EDataLayerType UDataLayerAsset::GetType() const {
    return EDataLayerType::Runtime;
}

FColor UDataLayerAsset::GetDebugColor() const {
    return FColor{};
}


