#pragma once
#include "CoreMinimal.h"
#include "UPSGroupMovementFormation.h"
#include "UPSFormation_FromFormationPoints.generated.h"

class UUPSFormationPointComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSFormation_FromFormationPoints : public AUPSGroupMovementFormation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUPSFormationPointComponent*> FormationPointComponents;
    
public:
    AUPSFormation_FromFormationPoints(const FObjectInitializer& ObjectInitializer);

};

