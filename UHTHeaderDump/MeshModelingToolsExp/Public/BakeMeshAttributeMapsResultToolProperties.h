#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeMapType.h"
#include "BakeMeshAttributeMapsResultToolProperties.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBakeMapType, UTexture2D*> Result;
    
    UBakeMeshAttributeMapsResultToolProperties();

};

