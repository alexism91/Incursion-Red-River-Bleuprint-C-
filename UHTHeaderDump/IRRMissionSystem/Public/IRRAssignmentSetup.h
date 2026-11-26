#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRAssignmentSetup.generated.h"

class UIRRGraphCondition;
class UIRRMissionSetup;

USTRUCT(BlueprintType)
struct FIRRAssignmentSetup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRMissionSetup* MissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRGraphCondition*> Conditions;
    
    IRRMISSIONSYSTEM_API FIRRAssignmentSetup();
};

