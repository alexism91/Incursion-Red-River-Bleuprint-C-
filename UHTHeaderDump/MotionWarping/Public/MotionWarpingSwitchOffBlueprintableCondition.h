#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESwitchOffConditionEffect.h"
#include "MotionWarpingSwitchOffCondition.h"
#include "Templates/SubclassOf.h"
#include "MotionWarpingSwitchOffBlueprintableCondition.generated.h"

class AActor;
class UMotionWarpingSwitchOffBlueprintableCondition;

UCLASS(Blueprintable, EditInlineNew)
class UMotionWarpingSwitchOffBlueprintableCondition : public UMotionWarpingSwitchOffCondition {
    GENERATED_BODY()
public:
    UMotionWarpingSwitchOffBlueprintableCondition();

private:
    UFUNCTION(BlueprintCallable)
    static UMotionWarpingSwitchOffBlueprintableCondition* CreateSwitchOffBlueprintableCondition(UPARAM(Ref) AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, TSubclassOf<UMotionWarpingSwitchOffBlueprintableCondition> InBlueprintableCondition, bool bInUseWarpTargetAsTargetLocation, AActor* InTargetActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BP_ExtraDebugInfo(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_Check(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const;
    
};

