#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "SimpleCollisionEditorTool.generated.h"

class USimpleCollisionEditorToolActionProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USimpleCollisionEditorTool : public USingleSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USimpleCollisionEditorToolActionProperties* ActionProperties;
    
public:
    USimpleCollisionEditorTool();


    // Fix for true pure virtual functions not being implemented
};

