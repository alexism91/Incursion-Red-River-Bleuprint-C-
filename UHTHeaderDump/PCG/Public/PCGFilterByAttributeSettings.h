#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeFilterOperator.h"
#include "EPCGFilterByAttributeMode.h"
#include "EPCGFilterByAttributeValueMode.h"
#include "EPCGStringMatchingOperator.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGFilterByAttributeThresholdSettings.h"
#include "PCGFilterByAttributeThresholdSettingsRange.h"
#include "PCGFilterDataBaseSettings.h"
#include "PCGFilterByAttributeSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGFilterByAttributeSettings : public UPCGFilterDataBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGFilterByAttributeMode FilterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetadataDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGStringMatchingOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreProperties;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGFilterByAttributeValueMode FilterByValueMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector TargetAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeFilterOperator FilterOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGFilterByAttributeThresholdSettings Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGFilterByAttributeThresholdSettingsRange MinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGFilterByAttributeThresholdSettingsRange MaxThreshold;
    
    UPCGFilterByAttributeSettings();

};

