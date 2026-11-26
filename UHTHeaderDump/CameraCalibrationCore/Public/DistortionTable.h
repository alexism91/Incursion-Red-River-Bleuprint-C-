#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "DistortionFocusCurve.h"
#include "DistortionFocusPoint.h"
#include "DistortionTable.generated.h"

USTRUCT(BlueprintType)
struct FDistortionTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDistortionFocusPoint> FocusPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDistortionFocusCurve> FocusCurves;
    
    CAMERACALIBRATIONCORE_API FDistortionTable();
};

