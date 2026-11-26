#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "BlendStackRootCameraNode.generated.h"

class UBlendCameraNode;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBlendStackRootCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlendCameraNode* Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraNode* RootNode;
    
    UBlendStackRootCameraNode();

};

