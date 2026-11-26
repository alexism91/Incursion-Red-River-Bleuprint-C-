#pragma once
#include "CoreMinimal.h"
#include "LightSourcePassedData.h"
#include "TargetLXRData.h"
#include "OnQueryLXRDoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQueryLXRDone, const FTargetLXRData&, TargetsLXR, const TSet<FLightSourcePassedData>&, PassedData);

