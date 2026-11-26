#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PerlinLayerProperties.h"
#include "DisplaceMeshPerlinNoiseProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerlinLayerProperties> PerlinLayerProperties;
    
    UDisplaceMeshPerlinNoiseProperties();

};

