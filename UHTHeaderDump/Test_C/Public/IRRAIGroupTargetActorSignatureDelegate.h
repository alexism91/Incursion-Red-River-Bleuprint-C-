#pragma once
#include "CoreMinimal.h"
#include "IRRAIGroupTargetActorSignatureDelegate.generated.h"

class AActor;
class AIRRAIGroupController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRRAIGroupTargetActorSignature, AIRRAIGroupController*, GroupController, AActor*, TargetActor);

