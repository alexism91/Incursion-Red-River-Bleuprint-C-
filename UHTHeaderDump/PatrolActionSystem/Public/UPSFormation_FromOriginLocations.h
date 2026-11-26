#pragma once
#include "CoreMinimal.h"
#include "UPSGroupMovementFormation.h"
#include "UPSFormation_FromOriginLocations.generated.h"

UCLASS(Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSFormation_FromOriginLocations : public AUPSGroupMovementFormation {
    GENERATED_BODY()
public:
    AUPSFormation_FromOriginLocations(const FObjectInitializer& ObjectInitializer);

};

