#include "MotionWarpingSwitchOffBlueprintableCondition.h"
#include "Templates/SubclassOf.h"

UMotionWarpingSwitchOffBlueprintableCondition::UMotionWarpingSwitchOffBlueprintableCondition() {
}

UMotionWarpingSwitchOffBlueprintableCondition* UMotionWarpingSwitchOffBlueprintableCondition::CreateSwitchOffBlueprintableCondition(AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, TSubclassOf<UMotionWarpingSwitchOffBlueprintableCondition> InBlueprintableCondition, bool bInUseWarpTargetAsTargetLocation, AActor* InTargetActor) {
    return NULL;
}

FString UMotionWarpingSwitchOffBlueprintableCondition::BP_ExtraDebugInfo_Implementation(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const {
    return TEXT("");
}

bool UMotionWarpingSwitchOffBlueprintableCondition::BP_Check_Implementation(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const {
    return false;
}


