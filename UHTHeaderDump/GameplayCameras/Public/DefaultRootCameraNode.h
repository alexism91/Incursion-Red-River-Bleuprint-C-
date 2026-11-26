#pragma once
#include "CoreMinimal.h"
#include "RootCameraNode.h"
#include "DefaultRootCameraNode.generated.h"

class UBlendStackCameraNode;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDefaultRootCameraNode : public URootCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlendStackCameraNode* BaseLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlendStackCameraNode* MainLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlendStackCameraNode* GlobalLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlendStackCameraNode* VisualLayer;
    
    UDefaultRootCameraNode();

};

