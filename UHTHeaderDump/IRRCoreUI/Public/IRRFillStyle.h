#pragma once
#include "CoreMinimal.h"
#include "EIRRFillMode.h"
#include "IRRColorRef.h"
#include "IRRFillStyle.generated.h"

USTRUCT(BlueprintType)
struct FIRRFillStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRFillMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRColorRef Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BrushToken;
    
    IRRCOREUI_API FIRRFillStyle();
};

