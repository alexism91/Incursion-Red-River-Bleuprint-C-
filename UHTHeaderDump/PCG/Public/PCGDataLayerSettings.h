#pragma once
#include "CoreMinimal.h"
#include "EPCGDataLayerSource.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGDataLayerReferenceSelector.h"
#include "PCGDataLayerSettings.generated.h"

USTRUCT(BlueprintType)
struct FPCGDataLayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDataLayerSource DataLayerSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector DataLayerReferenceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataLayerReferenceSelector IncludedDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataLayerReferenceSelector ExcludedDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataLayerReferenceSelector AddDataLayers;
    
    PCG_API FPCGDataLayerSettings();
};

