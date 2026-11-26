#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "CoverNavMapPatchedDelegate.generated.h"

class ACoverSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCoverNavMapPatched, const ACoverSystem*, CoverSystem, const TArray<FBox>&, PatchedBounds);

