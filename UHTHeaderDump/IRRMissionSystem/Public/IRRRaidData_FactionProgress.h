#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRLoyaltyByFaction.h"
#include "IRRRaidData_FactionProgress.generated.h"

USTRUCT(BlueprintType)
struct FIRRRaidData_FactionProgress : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoyaltyByFaction> LoyaltyByFaction;
    
    IRRMISSIONSYSTEM_API FIRRRaidData_FactionProgress();
};

