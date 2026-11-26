#pragma once
#include "CoreMinimal.h"
#include "OnLeaderPoseUpdatedDelegate.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeaderPoseUpdated, USkeletalMeshComponent*, NewLeader);

