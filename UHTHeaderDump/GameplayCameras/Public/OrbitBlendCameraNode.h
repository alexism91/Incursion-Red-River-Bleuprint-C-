#pragma once
#include "CoreMinimal.h"
#include "BlendCameraNode.h"
#include "OrbitBlendCameraNode.generated.h"

class USimpleBlendCameraNode;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UOrbitBlendCameraNode : public UBlendCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleBlendCameraNode* DrivingBlend;
    
    UOrbitBlendCameraNode();

};

