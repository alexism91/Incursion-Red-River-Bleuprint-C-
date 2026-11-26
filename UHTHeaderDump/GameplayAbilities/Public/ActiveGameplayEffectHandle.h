#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.generated.h"

USTRUCT(BlueprintType)
struct FActiveGameplayEffectHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassedFiltersAndWasExecuted;
    
public:
    GAMEPLAYABILITIES_API FActiveGameplayEffectHandle();
};

