#pragma once
#include "CoreMinimal.h"
#include "EIRRObjectiveWorldState.h"
#include "IRRObjectiveMarkerSetup.generated.h"

USTRUCT(BlueprintType)
struct FIRRObjectiveMarkerSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIRRObjectiveWorldState, bool> StateVisibility;
    
    IRRMISSIONSYSTEM_API FIRRObjectiveMarkerSetup();
};

