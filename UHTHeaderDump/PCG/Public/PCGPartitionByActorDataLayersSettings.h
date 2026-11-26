#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGDataLayerReferenceSelector.h"
#include "PCGSettings.h"
#include "PCGPartitionByActorDataLayersSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGPartitionByActorDataLayersSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector ActorReferenceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector DataLayerReferenceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataLayerReferenceSelector IncludedDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataLayerReferenceSelector ExcludedDataLayers;
    
    UPCGPartitionByActorDataLayersSettings();

};

