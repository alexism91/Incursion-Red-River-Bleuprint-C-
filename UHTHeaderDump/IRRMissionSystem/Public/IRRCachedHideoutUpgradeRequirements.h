#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRHideoutUpgradeRequirements.h"
#include "IRRCachedHideoutUpgradeRequirements.generated.h"

USTRUCT(BlueprintType)
struct FIRRCachedHideoutUpgradeRequirements : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HideoutUnitTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRHideoutUpgradeRequirements Requirements;
    
    IRRMISSIONSYSTEM_API FIRRCachedHideoutUpgradeRequirements();
};

