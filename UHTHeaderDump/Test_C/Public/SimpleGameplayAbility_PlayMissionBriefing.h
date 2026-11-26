#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRRMissionBriefing -FallbackName=IRRMissionBriefing
#include "CharacterMontageSet.h"
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_PlayMissionBriefing.generated.h"

class APawn;
class UIRRAgentSetup;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_PlayMissionBriefing : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMissionBriefing BriefingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAgentSetup* Agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BriefingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet RadioCallMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PostponeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostponeQuietTime;
    
    USimpleGameplayAbility_PlayMissionBriefing();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOwnedTagsUpdated(FGameplayTagContainer Tags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetInstigatorPawn() const;
    
};

