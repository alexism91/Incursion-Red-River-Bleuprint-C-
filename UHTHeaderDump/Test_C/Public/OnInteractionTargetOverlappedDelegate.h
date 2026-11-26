#pragma once
#include "CoreMinimal.h"
#include "OnInteractionTargetOverlappedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionTargetOverlapped, AActor*, InteractingActor, bool, bBeginOverlap);

