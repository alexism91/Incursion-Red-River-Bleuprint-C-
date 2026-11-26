#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "NodalOffsetFocusCurve.h"
#include "NodalOffsetFocusPoint.h"
#include "NodalOffsetTable.generated.h"

USTRUCT(BlueprintType)
struct FNodalOffsetTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodalOffsetFocusPoint> FocusPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodalOffsetFocusCurve> FocusCurves;
    
    CAMERACALIBRATIONCORE_API FNodalOffsetTable();
};

