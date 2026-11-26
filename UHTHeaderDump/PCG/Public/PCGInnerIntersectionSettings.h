#pragma once
#include "CoreMinimal.h"
#include "EPCGIntersectionDensityFunction.h"
#include "PCGSettings.h"
#include "PCGInnerIntersectionSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGInnerIntersectionSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGIntersectionDensityFunction DensityFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepZeroDensityPoints;
    
    UPCGInnerIntersectionSettings();

};

