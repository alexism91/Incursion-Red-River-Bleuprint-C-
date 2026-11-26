#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AITask_MoveTo -FallbackName=AITask_MoveTo
#include "AITask_HTNMoveTo.generated.h"

UCLASS(Blueprintable)
class HTN_API UAITask_HTNMoveTo : public UAITask_MoveTo {
    GENERATED_BODY()
public:
    UAITask_HTNMoveTo();

};

