#pragma once
#include "CoreMinimal.h"
#include "EPCGIntersectionDensityFunction.h"
#include "PCGSettingsWithDynamicInputs.h"
#include "PCGOuterIntersectionSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGOuterIntersectionSettings : public UPCGSettingsWithDynamicInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGIntersectionDensityFunction DensityFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePinsWithNoInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepZeroDensityPoints;
    
    UPCGOuterIntersectionSettings();

};

