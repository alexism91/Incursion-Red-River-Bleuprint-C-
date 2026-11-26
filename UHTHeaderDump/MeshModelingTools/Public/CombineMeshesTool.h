#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolExclusiveToolAPI -FallbackName=InteractiveToolExclusiveToolAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "CombineMeshesTool.generated.h"

class UCombineMeshesToolProperties;
class UCreateMeshObjectTypeProperties;
class UOnAcceptHandleSourcesPropertiesBase;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCombineMeshesTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolExclusiveToolAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombineMeshesToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnAcceptHandleSourcesPropertiesBase* HandleSourceProperties;
    
public:
    UCombineMeshesTool();


    // Fix for true pure virtual functions not being implemented
};

