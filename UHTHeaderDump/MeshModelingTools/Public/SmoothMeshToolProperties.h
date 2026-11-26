#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ESmoothMeshToolSmoothType.h"
#include "SmoothMeshToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USmoothMeshToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmoothMeshToolSmoothType SmoothingType;
    
    USmoothMeshToolProperties();

};

