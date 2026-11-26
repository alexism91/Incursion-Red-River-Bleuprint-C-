#pragma once
#include "CoreMinimal.h"
#include "BlendCameraNode.h"
#include "LocationRotationBlendCameraNode.generated.h"

class USimpleBlendCameraNode;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULocationRotationBlendCameraNode : public UBlendCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleBlendCameraNode* LocationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleBlendCameraNode* RotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleBlendCameraNode* OtherBlend;
    
    ULocationRotationBlendCameraNode();

};

