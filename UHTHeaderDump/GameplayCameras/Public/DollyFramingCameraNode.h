#pragma once
#include "CoreMinimal.h"
#include "BaseFramingCameraNode.h"
#include "BooleanCameraParameter.h"
#include "DollyFramingCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDollyFramingCameraNode : public UBaseFramingCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter CanMoveLaterally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter CanMoveVertically;
    
    UDollyFramingCameraNode();

};

