#pragma once
#include "CoreMinimal.h"
#include "CameraParameterClamping.h"
#include "CameraParameterNormalization.h"
#include "CameraRigInputSlotParameters.h"
#include "CameraVariableID.h"
#include "EBuiltInVector2dCameraVariable.h"
#include "Input2DCameraNode.h"
#include "Vector2dCameraVariableReference.h"
#include "CameraRigInput2DSlot.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCameraRigInput2DSlot : public UInput2DCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRigInputSlotParameters InputSlotParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraParameterClamping ClampX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraParameterClamping ClampY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraParameterNormalization NormalizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraParameterNormalization NormalizeY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuiltInVector2dCameraVariable BuiltInVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2dCameraVariableReference CustomVariable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID TransientVariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
public:
    UCameraRigInput2DSlot();

};

