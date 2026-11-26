#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "CachedAnimAssetPlayerData.h"
#include "CachedAnimRelevancyData.h"
#include "CachedAnimStateArray.h"
#include "CachedAnimStateData.h"
#include "CachedAnimTransitionData.h"
#include "CachedAnimDataLibrary.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, MinimalAPI)
class UCachedAnimDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCachedAnimDataLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StateMachine_IsStateRelevant(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StateMachine_IsRelevant(UAnimInstance* InAnimInstance, const FCachedAnimStateArray& CachedAnimStateArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StateMachine_IsFullWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateArray& CachedAnimStateArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetTotalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateArray& CachedAnimStateArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetRelevantAnimTimeRemainingFraction(UAnimInstance* InAnimInstance, const FCachedAnimRelevancyData& CachedAnimRelevancyData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetRelevantAnimTimeRemaining(UAnimInstance* InAnimInstance, const FCachedAnimRelevancyData& CachedAnimRelevancyData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetRelevantAnimTime(UAnimInstance* InAnimInstance, const FCachedAnimRelevancyData& CachedAnimRelevancyData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetLocalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetGlobalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetCrossfadeDuration(UAnimInstance* InAnimInstance, const FCachedAnimTransitionData& CachedAnimTransitionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetAssetPlayerTimeRatio(UAnimInstance* InAnimInstance, const FCachedAnimAssetPlayerData& CachedAnimAssetPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetAssetPlayerTime(UAnimInstance* InAnimInstance, const FCachedAnimAssetPlayerData& CachedAnimAssetPlayerData);
    
};

