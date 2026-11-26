#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EdGraphNode -FallbackName=EdGraphNode
#include "DataflowEdNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDataflowEdNode : public UEdGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRenderInAssetEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRenderWireframeInAssetEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanEnableRenderWireframe;
    
public:
    UDataflowEdNode();

};

