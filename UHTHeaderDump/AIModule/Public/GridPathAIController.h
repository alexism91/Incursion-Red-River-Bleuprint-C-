#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GridPathAIController.generated.h"

UCLASS(Blueprintable, NoExport)
class AGridPathAIController : public AAIController {
    GENERATED_BODY()
public:
    AGridPathAIController(const FObjectInitializer& ObjectInitializer);

};

