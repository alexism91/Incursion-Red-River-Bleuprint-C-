#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EIRRBriefingStartResult.h"
#include "IRRBriefingPick.h"
#include "IRRBriefingVariants.h"
#include "IRRMissionBriefing.h"
#include "Templates/SubclassOf.h"
#include "IRRMissionBriefingLibrary.generated.h"

class APawn;
class UIRRAgentSetup;
class UObject;
class USimpleGameplayAbility_PlayMissionBriefing;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionBriefingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRMissionBriefingLibrary();

    UFUNCTION(BlueprintCallable)
    static bool TryStartBriefingAbility(APawn* Pawn, const FIRRMissionBriefing& Briefing, UIRRAgentSetup* Agent, TSubclassOf<USimpleGameplayAbility_PlayMissionBriefing> AbilityClassOverride, bool bIgnoreDanger);
    
    UFUNCTION(BlueprintCallable)
    static EIRRBriefingStartResult TryPlayBriefing(APawn* Pawn, const FIRRBriefingVariants& Briefing, UIRRAgentSetup* Agent, TSubclassOf<USimpleGameplayAbility_PlayMissionBriefing> AbilityClassOverride);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBriefingAutoPlayedInUI(const UObject* WorldContextObject, const FIRRMissionBriefing& Briefing, bool bAutoPlayed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetBriefingMemory(const UObject* WorldContextObject, const FIRRBriefingVariants& Briefing);
    
    UFUNCTION(BlueprintCallable)
    static bool PickBriefing(const APawn* Pawn, const FIRRBriefingVariants& Briefing, FIRRBriefingPick& OutPick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasPlayedFirstTimeBriefing(const APawn* Pawn, const FIRRBriefingVariants& Briefing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasBriefingAutoPlayedInUI(const UObject* WorldContextObject, const FIRRMissionBriefing& Briefing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBriefingAudioDuration(const FIRRMissionBriefing& Briefing);
    
    UFUNCTION(BlueprintCallable)
    static void CommitBriefingPick(const APawn* Pawn, const FIRRBriefingVariants& Briefing, const FIRRBriefingPick& Pick);
    
};

