#include "InterchangeFactoryBase.h"

UInterchangeFactoryBase::UInterchangeFactoryBase() {
    this->Results = NULL;
}

bool UInterchangeFactoryBase::SetSourceFilename(const UObject* Object, const FString& SourceFilename, int32 SourceIndex) const {
    return false;
}

bool UInterchangeFactoryBase::GetSourceFilenames(const UObject* Object, TArray<FString>& OutSourceFilenames) const {
    return false;
}

UClass* UInterchangeFactoryBase::GetFactoryClass() const {
    return NULL;
}

EInterchangeFactoryAssetType UInterchangeFactoryBase::GetFactoryAssetType() {
    return EInterchangeFactoryAssetType::None;
}


