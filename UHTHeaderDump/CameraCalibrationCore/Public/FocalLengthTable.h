#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "FocalLengthFocusCurve.h"
#include "FocalLengthFocusPoint.h"
#include "FocalLengthTable.generated.h"

USTRUCT(BlueprintType)
struct FFocalLengthTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocalLengthFocusPoint> FocusPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocalLengthFocusCurve> FocusCurves;
    
    CAMERACALIBRATIONCORE_API FFocalLengthTable();
};

