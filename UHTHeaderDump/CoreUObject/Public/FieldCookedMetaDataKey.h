#pragma once
#include "CoreMinimal.h"
#include "FieldCookedMetaDataKey.generated.h"

USTRUCT(BlueprintType)
struct FFieldCookedMetaDataKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FieldPath;
    
    COREUOBJECT_API FFieldCookedMetaDataKey();
};
FORCEINLINE uint32 GetTypeHash(const FFieldCookedMetaDataKey) { return 0; }

