#pragma once
#include "CoreMinimal.h"
#include "FieldCookedMetaDataValue.generated.h"

USTRUCT(BlueprintType)
struct FFieldCookedMetaDataValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MetaData;
    
    COREUOBJECT_API FFieldCookedMetaDataValue();
};

