#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AICoverSystem -ObjectName=CoverData -FallbackName=CoverData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ECoverAimDirection.h"
#include "ECoverIdleStance.h"
#include "OccupiedCover.generated.h"

USTRUCT(BlueprintType)
struct FOccupiedCover : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverIdleStance CoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverData CoverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECoverAimDirection> SupportedAimDirections;
    
    TEST_C_API FOccupiedCover();
};

