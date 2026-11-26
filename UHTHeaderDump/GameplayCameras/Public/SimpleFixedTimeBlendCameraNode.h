#pragma once
#include "CoreMinimal.h"
#include "SimpleBlendCameraNode.h"
#include "SimpleFixedTimeBlendCameraNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class USimpleFixedTimeBlendCameraNode : public USimpleBlendCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    USimpleFixedTimeBlendCameraNode();

};

