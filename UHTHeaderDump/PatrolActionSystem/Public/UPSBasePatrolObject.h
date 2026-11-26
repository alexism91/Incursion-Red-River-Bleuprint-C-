#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UPSBasePatrolObject.generated.h"

UCLASS(Abstract, Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSBasePatrolObject : public AActor {
    GENERATED_BODY()
public:
    AUPSBasePatrolObject(const FObjectInitializer& ObjectInitializer);

};

