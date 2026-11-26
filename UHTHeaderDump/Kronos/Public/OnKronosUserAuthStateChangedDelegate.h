#pragma once
#include "CoreMinimal.h"
#include "EKronosUserAuthState.h"
#include "OnKronosUserAuthStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKronosUserAuthStateChanged, EKronosUserAuthState, NewState, EKronosUserAuthState, PrevState, bool, bIsInitialAuth);

