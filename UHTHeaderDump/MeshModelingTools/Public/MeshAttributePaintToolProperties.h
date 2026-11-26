#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshAttributePaintToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Attribute;
    
    UMeshAttributePaintToolProperties();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAttributeNames();
    
};

