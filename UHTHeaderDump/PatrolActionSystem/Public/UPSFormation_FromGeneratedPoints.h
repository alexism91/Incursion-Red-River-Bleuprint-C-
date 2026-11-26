#pragma once
#include "CoreMinimal.h"
#include "FormationPointsGenerationSettings.h"
#include "UPSGroupMovementFormation.h"
#include "UPSFormation_FromGeneratedPoints.generated.h"

UCLASS(Abstract, Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSFormation_FromGeneratedPoints : public AUPSGroupMovementFormation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFormationPointsGenerationSettings PointsGenerationSettings;
    
public:
    AUPSFormation_FromGeneratedPoints(const FObjectInitializer& ObjectInitializer);

};

