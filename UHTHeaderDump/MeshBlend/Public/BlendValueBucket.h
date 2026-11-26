#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "GridCell.h"
#include "BlendValueBucket.generated.h"

USTRUCT(BlueprintType)
struct MESHBLEND_API FBlendValueBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, FGridCell> GridCells;
    
    FBlendValueBucket();
};

