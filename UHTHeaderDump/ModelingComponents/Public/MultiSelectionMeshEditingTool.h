#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MultiSelectionTool -FallbackName=MultiSelectionTool
#include "MultiSelectionMeshEditingTool.generated.h"

class UWorld;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMultiSelectionMeshEditingTool : public UMultiSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> TargetWorld;
    
public:
    UMultiSelectionMeshEditingTool();

};

