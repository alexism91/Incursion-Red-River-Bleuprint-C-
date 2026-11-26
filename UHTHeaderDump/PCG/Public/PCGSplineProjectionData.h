#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector2D -FallbackName=InterpCurveVector2D
#include "PCGProjectionData.h"
#include "PCGSplineProjectionData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGSplineProjectionData : public UPCGProjectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector2D ProjectedPosition;
    
    UPCGSplineProjectionData();

};

