#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraParameter.h"
#include "CameraNode.h"
#include "FloatCameraParameter.h"
#include "OrthographicCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UOrthographicCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter EnableOrthographicMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter OrthographicWidth;
    
    UOrthographicCameraNode();

};

