#pragma once
#include "CoreMinimal.h"
#include "NetTokenStoreTypeIdPair.generated.h"

USTRUCT(BlueprintType)
struct FNetTokenStoreTypeIdPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoreTypeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TypeID;
    
    IRISCORE_API FNetTokenStoreTypeIdPair();
};

