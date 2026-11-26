#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "STMapFocusCurve.h"
#include "STMapFocusPoint.h"
#include "STMapTable.generated.h"

USTRUCT(BlueprintType)
struct FSTMapTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSTMapFocusPoint> FocusPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSTMapFocusCurve> FocusCurves;
    
    CAMERACALIBRATIONCORE_API FSTMapTable();
};

