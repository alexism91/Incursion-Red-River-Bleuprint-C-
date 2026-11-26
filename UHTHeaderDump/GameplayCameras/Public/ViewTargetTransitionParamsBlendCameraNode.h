#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ViewTargetTransitionParams -FallbackName=ViewTargetTransitionParams
#include "SimpleBlendCameraNode.h"
#include "ViewTargetTransitionParamsBlendCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UViewTargetTransitionParamsBlendCameraNode : public USimpleBlendCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams TransitionParams;
    
    UViewTargetTransitionParamsBlendCameraNode();

};

