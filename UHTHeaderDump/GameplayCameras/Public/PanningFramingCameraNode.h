#pragma once
#include "CoreMinimal.h"
#include "BaseFramingCameraNode.h"
#include "BooleanCameraParameter.h"
#include "PanningFramingCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UPanningFramingCameraNode : public UBaseFramingCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter CanPanLaterally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter CanPanVertically;
    
    UPanningFramingCameraNode();

};

