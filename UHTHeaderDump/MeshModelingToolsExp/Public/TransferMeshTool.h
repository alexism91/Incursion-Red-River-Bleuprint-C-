#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolExclusiveToolAPI -FallbackName=InteractiveToolExclusiveToolAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "TransferMeshTool.generated.h"

class UTransferMeshToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTransferMeshTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolExclusiveToolAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransferMeshToolProperties* BasicProperties;
    
    UTransferMeshTool();


    // Fix for true pure virtual functions not being implemented
};

