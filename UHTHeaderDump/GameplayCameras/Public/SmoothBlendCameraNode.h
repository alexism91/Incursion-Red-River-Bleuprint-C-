#pragma once
#include "CoreMinimal.h"
#include "ESmoothCameraBlendType.h"
#include "SimpleFixedTimeBlendCameraNode.h"
#include "SmoothBlendCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USmoothBlendCameraNode : public USimpleFixedTimeBlendCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmoothCameraBlendType BlendType;
    
    USmoothBlendCameraNode();

};

