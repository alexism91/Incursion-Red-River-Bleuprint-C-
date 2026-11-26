#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolExclusiveToolAPI -FallbackName=InteractiveToolExclusiveToolAPI
#include "ConvertMeshesTool.generated.h"

class UConvertMeshesToolProperties;
class UCreateMeshObjectTypeProperties;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UConvertMeshesTool : public UInteractiveTool, public IInteractiveToolExclusiveToolAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConvertMeshesToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> Inputs;
    
public:
    UConvertMeshesTool();


    // Fix for true pure virtual functions not being implemented
};

