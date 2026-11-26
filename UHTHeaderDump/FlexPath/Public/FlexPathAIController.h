#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "FlexPathAIController.generated.h"

UCLASS(Blueprintable, NoExport)
class FLEXPATH_API AFlexPathAIController : public AAIController {
    GENERATED_BODY()
public:
    AFlexPathAIController(const FObjectInitializer& ObjectInitializer);

};

