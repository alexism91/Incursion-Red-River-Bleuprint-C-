#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EExtractSplineMode.h"
#include "ExtractSplineToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UExtractSplineToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExtractSplineMode ExtractionMode;
    
    UExtractSplineToolProperties();

};

