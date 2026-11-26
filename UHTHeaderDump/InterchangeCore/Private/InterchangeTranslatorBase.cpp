#include "InterchangeTranslatorBase.h"

UInterchangeTranslatorBase::UInterchangeTranslatorBase() {
    this->Results = NULL;
    this->SourceData = NULL;
}

void UInterchangeTranslatorBase::SetSettings(const UInterchangeTranslatorSettings* InterchangeTranslatorSettings) {
}

EInterchangeTranslatorType UInterchangeTranslatorBase::GetTranslatorType() const {
    return EInterchangeTranslatorType::Invalid;
}

TArray<FString> UInterchangeTranslatorBase::GetSupportedFormats() const {
    return TArray<FString>();
}

EInterchangeTranslatorAssetType UInterchangeTranslatorBase::GetSupportedAssetTypes() const {
    return EInterchangeTranslatorAssetType::None;
}

UInterchangeSourceData* UInterchangeTranslatorBase::GetSourceData() const {
    return NULL;
}

UInterchangeTranslatorSettings* UInterchangeTranslatorBase::GetSettings() const {
    return NULL;
}

bool UInterchangeTranslatorBase::CanImportSourceData(const UInterchangeSourceData* InSourceData) const {
    return false;
}


