#pragma once
#include "CoreMinimal.h"
#include "PCGAttributeFilterThresholdSettings.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeFilteringRangeSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGAttributeFilteringRangeSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector TargetAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributeFilterThresholdSettings MinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributeFilterThresholdSettings MaxThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnOnDataMissingAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSpatialToPointDeprecation;
    
    UPCGAttributeFilteringRangeSettings();

};

