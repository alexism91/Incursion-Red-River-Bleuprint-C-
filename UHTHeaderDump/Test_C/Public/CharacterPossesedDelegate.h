#pragma once
#include "CoreMinimal.h"
#include "CharacterPossesedDelegate.generated.h"

class AController;
class AIRRBaseCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterPossesed, AIRRBaseCharacter*, Character, AController*, NewController);

