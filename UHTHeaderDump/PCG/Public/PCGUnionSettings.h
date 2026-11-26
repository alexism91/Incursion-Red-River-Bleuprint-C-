#pragma once
#include "CoreMinimal.h"
#include "EPCGUnionDensityFunction.h"
#include "EPCGUnionType.h"
#include "PCGSettingsWithDynamicInputs.h"
#include "PCGUnionSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGUnionSettings : public UPCGSettingsWithDynamicInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGUnionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGUnionDensityFunction DensityFunction;
    
    UPCGUnionSettings();

};

