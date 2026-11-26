#pragma once
#include "CoreMinimal.h"
#include "FieldCookedMetaDataKey.h"
#include "FieldCookedMetaDataValue.h"
#include "FieldCookedMetaDataStore.generated.h"

USTRUCT(BlueprintType)
struct FFieldCookedMetaDataStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> FieldMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFieldCookedMetaDataKey, FFieldCookedMetaDataValue> SubFieldMetaData;
    
public:
    COREUOBJECT_API FFieldCookedMetaDataStore();
};

