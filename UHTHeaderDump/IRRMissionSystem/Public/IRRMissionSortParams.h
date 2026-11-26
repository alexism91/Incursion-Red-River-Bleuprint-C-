#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EIRRMissionSortCategories.h"
#include "IRRMissionSortParams.generated.h"

USTRUCT(BlueprintType)
struct FIRRMissionSortParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRMissionSortCategories SortCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDescending;
    
    IRRMISSIONSYSTEM_API FIRRMissionSortParams();
};

