#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "OnAIStartMovementToActorDelegate.h"
#include "OnAIStartMovementToLocationDelegate.h"
#include "UPSGroupMovementAIController.generated.h"

UCLASS(Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSGroupMovementAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIStartMovementToLocation OnAIStartMovementToLocationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIStartMovementToActor OnAIStartMovementToActorDelegate;
    
    AUPSGroupMovementAIController(const FObjectInitializer& ObjectInitializer);

};

