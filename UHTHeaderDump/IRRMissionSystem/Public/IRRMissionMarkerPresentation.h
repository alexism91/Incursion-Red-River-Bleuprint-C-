#pragma once
#include "CoreMinimal.h"
#include "EIRRObjectiveWorldState.h"
#include "IRRMarkerSettings.h"
#include "IRRMissionMarkerPresentation.generated.h"

USTRUCT(BlueprintType)
struct FIRRMissionMarkerPresentation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRObjectiveWorldState DisplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMarkerSettings MarkerSettings;
    
    IRRMISSIONSYSTEM_API FIRRMissionMarkerPresentation();
};

