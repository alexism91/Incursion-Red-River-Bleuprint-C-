#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRHideoutUpgradeCached.generated.h"

USTRUCT(BlueprintType)
struct FIRRHideoutUpgradeCached {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Items;
    
    IRRMISSIONSYSTEM_API FIRRHideoutUpgradeCached();
};

