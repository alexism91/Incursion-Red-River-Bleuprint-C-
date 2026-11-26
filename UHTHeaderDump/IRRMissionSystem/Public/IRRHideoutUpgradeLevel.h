#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRHideoutUpgradeRequirements.h"
#include "IRRHideoutUpgradeLevel.generated.h"

class UIRRHideoutAction;

USTRUCT(BlueprintType)
struct FIRRHideoutUpgradeLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRHideoutUpgradeRequirements Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UpgradeLevelDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRHideoutAction*> Actions;
    
    IRRMISSIONSYSTEM_API FIRRHideoutUpgradeLevel();
};

