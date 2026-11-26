#pragma once
#include "CoreMinimal.h"
#include "BitFlag64_SenseSys.generated.h"

USTRUCT(BlueprintType)
struct SENSESYSTEM_API FBitFlag64_SenseSys {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
    FBitFlag64_SenseSys();
};

