#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRUpperBodyStanceDef.h"
#include "IRRUpperBodyStanceMachine.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRUpperBodyStanceMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRUpperBodyStanceDef> StanceDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentStance;
    
public:
    FIRRUpperBodyStanceMachine();
};

