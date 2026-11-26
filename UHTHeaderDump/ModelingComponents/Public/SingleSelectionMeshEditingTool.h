#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleSelectionTool -FallbackName=SingleSelectionTool
#include "SingleSelectionMeshEditingTool.generated.h"

class UWorld;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USingleSelectionMeshEditingTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> TargetWorld;
    
public:
    USingleSelectionMeshEditingTool();

};

