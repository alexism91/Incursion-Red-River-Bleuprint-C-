#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SimpleGameplayAbility_Toggleable.h"
#include "SimpleGameplayAbility_Run.generated.h"

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_Run : public USimpleGameplayAbility_Toggleable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RunWantsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TacSprintWantsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunReleaseGraceTime;
    
public:
    USimpleGameplayAbility_Run();

};

