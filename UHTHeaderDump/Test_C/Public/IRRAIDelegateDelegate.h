#pragma once
#include "CoreMinimal.h"
#include "IRRAIDelegateDelegate.generated.h"

class AIRRAIBaseController;
class AIRRBaseCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRRAIDelegate, AIRRAIBaseController*, Controller, AIRRBaseCharacter*, Character);

