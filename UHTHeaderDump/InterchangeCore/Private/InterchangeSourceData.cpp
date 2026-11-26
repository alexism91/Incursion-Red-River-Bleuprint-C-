#include "InterchangeSourceData.h"

UInterchangeSourceData::UInterchangeSourceData() {
}

bool UInterchangeSourceData::SetFilename(const FString& InFilename) {
    return false;
}

void UInterchangeSourceData::SetContextObjectByTag(const FString& Tag, UObject* Object) const {
}

void UInterchangeSourceData::RemoveAllContextObjects() const {
}

FString UInterchangeSourceData::GetFilename() const {
    return TEXT("");
}

UObject* UInterchangeSourceData::GetContextObjectByTag(const FString& Tag) const {
    return NULL;
}

TArray<FString> UInterchangeSourceData::GetAllContextObjectTags() const {
    return TArray<FString>();
}


