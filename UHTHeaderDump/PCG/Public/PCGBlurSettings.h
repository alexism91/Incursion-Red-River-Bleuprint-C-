#pragma once
#include "CoreMinimal.h"
#include "EPCGBlurElementMode.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "PCGBlurSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGBlurSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector OutputTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumIterations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SearchDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGBlurElementMode BlurMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomStandardDeviation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomStandardDeviation;
    
    UPCGBlurSettings();

};

