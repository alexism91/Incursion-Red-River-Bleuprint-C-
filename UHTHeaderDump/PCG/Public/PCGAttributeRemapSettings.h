#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGAttributeRemapSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGAttributeRemapSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InRangeMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InRangeMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OutRangeMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OutRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampToUnitRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreValuesOutsideInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInverseRange;
    
    UPCGAttributeRemapSettings();

};

