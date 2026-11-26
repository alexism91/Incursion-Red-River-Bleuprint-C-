#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTDecorator.h"
#include "ValueOrBBKey_Bool.h"
#include "ValueOrBBKey_Float.h"
#include "BTDecorator_SetTagCooldown.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_SetTagCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float CooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool bAddToExistingDuration;
    
    UBTDecorator_SetTagCooldown();

};

