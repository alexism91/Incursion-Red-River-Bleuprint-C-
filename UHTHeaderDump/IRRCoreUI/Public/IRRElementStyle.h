#pragma once
#include "CoreMinimal.h"
#include "IRRFillStyle.h"
#include "IRRLayoutStyle.h"
#include "IRROutlineStyle.h"
#include "IRRRowLayout.h"
#include "IRRTextStyle.h"
#include "IRRElementStyle.generated.h"

USTRUCT(BlueprintType)
struct FIRRElementStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFillStyle Fill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFillStyle FillActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROutlineStyle Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRTextStyle Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRTextStyle TextActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRTextStyle TextSubHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRLayoutStyle Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRowLayout Row;
    
    IRRCOREUI_API FIRRElementStyle();
};

