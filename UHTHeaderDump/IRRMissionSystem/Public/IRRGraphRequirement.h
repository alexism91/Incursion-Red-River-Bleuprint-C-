#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRMissionVariable.h"
#include "IRRGraphRequirement.generated.h"

class UIRRMissionService;

USTRUCT(BlueprintType)
struct FIRRGraphRequirement : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMissionVariable TargetVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionService* Service;
    
    IRRMISSIONSYSTEM_API FIRRGraphRequirement();
};

