#pragma once
#include "CoreMinimal.h"
#include "IRRCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FIRRCharacterInfo();
};

