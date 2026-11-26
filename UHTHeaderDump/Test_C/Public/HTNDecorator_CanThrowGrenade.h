#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "EIRRGrenadeThrowStyle.h"
#include "HTNDecorator_CanThrowGrenade.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_CanThrowGrenade : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrenadeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckTargetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckClearArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRGrenadeThrowStyle Style;
    
    UHTNDecorator_CanThrowGrenade();

};

