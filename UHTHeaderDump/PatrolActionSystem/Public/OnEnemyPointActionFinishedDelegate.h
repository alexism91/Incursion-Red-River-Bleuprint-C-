#pragma once
#include "CoreMinimal.h"
#include "OnEnemyPointActionFinishedDelegate.generated.h"

class ACharacter;
class AUPSEnemyPointAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEnemyPointActionFinished, AUPSEnemyPointAction*, EnemyPointAction, ACharacter*, Character);

