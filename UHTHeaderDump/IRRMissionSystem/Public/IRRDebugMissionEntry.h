#pragma once
#include "CoreMinimal.h"
#include "IRRDebugMissionEntry.generated.h"

class UIRRMissionSetup;

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRRDebugMissionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRMissionSetup> MissionSetup;
    
    FIRRDebugMissionEntry();
};

