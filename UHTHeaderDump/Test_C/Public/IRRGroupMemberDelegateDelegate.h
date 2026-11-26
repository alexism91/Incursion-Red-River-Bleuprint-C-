#pragma once
#include "CoreMinimal.h"
#include "IRRGroupMemberDelegateDelegate.generated.h"

class AIRRAIGroupController;
class UIRRAIGroupComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRRGroupMemberDelegate, AIRRAIGroupController*, Group, UIRRAIGroupComponent*, Bot);

