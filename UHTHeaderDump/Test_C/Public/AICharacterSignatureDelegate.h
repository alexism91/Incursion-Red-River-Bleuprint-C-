#pragma once
#include "CoreMinimal.h"
#include "AICharacterSignatureDelegate.generated.h"

class AIRRBaseCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAICharacterSignature, AIRRBaseCharacter*, Character);

