#pragma once
#include "CoreMinimal.h"
#include "BTTask_MoveTo.h"
#include "BTTask_MoveDirectlyToward.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UBTTask_MoveDirectlyToward();

};

