#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "ECameraBlendStackType.h"
#include "ECameraRigLayer.h"
#include "BlendStackCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBlendStackCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraBlendStackType BlendStackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraRigLayer Layer;
    
    UBlendStackCameraNode();

};

