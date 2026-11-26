#pragma once
#include "CoreMinimal.h"
#include "IRRBodyInvalidatedSignatureDelegate.generated.h"

class AIRRBaseCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRBodyInvalidatedSignature, AIRRBaseCharacter*, DeadCharacter);

