#pragma once
#include "CoreMinimal.h"
#include "AchievementWriteCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAchievementWriteCompleteDelegate, const FString&, WrittenAchievementName, float, WrittenProgress, int32, WrittenUserTag);

