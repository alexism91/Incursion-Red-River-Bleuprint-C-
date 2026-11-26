#pragma once
#include "CoreMinimal.h"
#include "CameraParameterClamping.h"
#include "CameraParameterNormalization.h"
#include "CameraRigInputSlotParameters.h"
#include "CameraVariableID.h"
#include "DoubleCameraVariableReference.h"
#include "EBuiltInDoubleCameraVariable.h"
#include "Input1DCameraNode.h"
#include "CameraRigInput1DSlot.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCameraRigInput1DSlot : public UInput1DCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRigInputSlotParameters InputSlotParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraParameterClamping clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraParameterNormalization Normalize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuiltInDoubleCameraVariable BuiltInVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoubleCameraVariableReference CustomVariable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID TransientVariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
public:
    UCameraRigInput1DSlot();

};

