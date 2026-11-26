#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IRRBodyDiscoveredSignatureDelegate.generated.h"

class AIRRAIBaseController;
class AIRRBaseCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIRRBodyDiscoveredSignature, AIRRAIBaseController*, Spotter, AIRRBaseCharacter*, DeadCharacter, FVector, BodyLocation, bool, bFirstDiscovery);

