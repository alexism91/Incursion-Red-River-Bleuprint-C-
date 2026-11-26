#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRRBriefingPick -FallbackName=IRRBriefingPick
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRRBriefingVariants -FallbackName=IRRBriefingVariants
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRRMissionBriefing -FallbackName=IRRMissionBriefing
#include "IRRHandlerVoiceSet.generated.h"

class APawn;
class UIRRAgentSetup;

UCLASS(Blueprintable)
class TEST_C_API UIRRHandlerVoiceSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAgentSetup* Agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRBriefingVariants> Beats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InterruptingBeats;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRMissionBriefing> Lines;
    
public:
    UIRRHandlerVoiceSet();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeatInterrupt(FGameplayTag Beat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PickLine(const APawn* Listener, FGameplayTag Beat, FIRRBriefingPick& OutPick) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLine(FGameplayTag Beat, FIRRMissionBriefing& Outline) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CommitLine(const APawn* Listener, FGameplayTag Beat, const FIRRBriefingPick& Pick) const;
    
};

