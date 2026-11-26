#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingResult -FallbackName=EPathFollowingResult
#include "OnMovetoEnemyPointActionFinishedDelegate.generated.h"

class ACharacter;
class UUPSMoveToEnemyPointAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMovetoEnemyPointActionFinished, ACharacter*, Character, UUPSMoveToEnemyPointAction*, MoveTask, TEnumAsByte<EPathFollowingResult::Type>, Result);

