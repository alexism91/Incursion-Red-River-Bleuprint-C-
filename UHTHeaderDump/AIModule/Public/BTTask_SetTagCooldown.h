#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTTaskNode.h"
#include "ValueOrBBKey_Bool.h"
#include "ValueOrBBKey_Float.h"
#include "BTTask_SetTagCooldown.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_SetTagCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool bAddToExistingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float CooldownDuration;
    
    UBTTask_SetTagCooldown();

};

