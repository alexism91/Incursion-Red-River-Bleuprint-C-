#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PatrolPointLink.h"
#include "UPSPatrolPointSolver.generated.h"

class ACharacter;
class AUPSPatrolPoint;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class PATROLACTIONSYSTEM_API UUPSPatrolPointSolver : public UObject {
    GENERATED_BODY()
public:
    UUPSPatrolPointSolver();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AUPSPatrolPoint* SelectPatrolPoint(UPARAM(Ref) TArray<FPatrolPointLink>& PatrolPointLinks, AUPSPatrolPoint* ThisPatrolPoint, ACharacter* Character);
    
};

