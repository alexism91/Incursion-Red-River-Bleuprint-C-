#pragma once
#include "CoreMinimal.h"
#include "IRRColorRef.h"
#include "IRRSizeRef.h"
#include "IRRTextStyle.generated.h"

USTRUCT(BlueprintType)
struct FIRRTextStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRColorRef Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSizeRef Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValueFont;
    
    IRRCOREUI_API FIRRTextStyle();
};

