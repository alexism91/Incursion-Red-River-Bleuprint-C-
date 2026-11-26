#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "ImageCenterFocusCurve.h"
#include "ImageCenterFocusPoint.h"
#include "ImageCenterTable.generated.h"

USTRUCT(BlueprintType)
struct FImageCenterTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImageCenterFocusPoint> FocusPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImageCenterFocusCurve> FocusCurves;
    
    CAMERACALIBRATIONCORE_API FImageCenterTable();
};

