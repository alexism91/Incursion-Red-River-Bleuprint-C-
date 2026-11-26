#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRRaidData_Missions.generated.h"

class UIRRMissionData;

USTRUCT(BlueprintType)
struct FIRRRaidData_Missions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> MissionsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> MissionsFailed;
    
    IRRMISSIONSYSTEM_API FIRRRaidData_Missions();
};

