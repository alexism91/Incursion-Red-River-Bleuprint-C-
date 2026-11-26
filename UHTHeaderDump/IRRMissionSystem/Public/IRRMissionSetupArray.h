#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRMissionSetupArray.generated.h"

class UIRRMissionSetup;

USTRUCT(BlueprintType)
struct FIRRMissionSetupArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionSetup*> Missions;
    
    IRRMISSIONSYSTEM_API FIRRMissionSetupArray();
};

