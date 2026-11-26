#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraRigParameterOverride.h"
#include "DoubleCameraRigParameterOverride.h"
#include "FloatCameraRigParameterOverride.h"
#include "Integer32CameraRigParameterOverride.h"
#include "Rotator3dCameraRigParameterOverride.h"
#include "Rotator3fCameraRigParameterOverride.h"
#include "Transform3dCameraRigParameterOverride.h"
#include "Transform3fCameraRigParameterOverride.h"
#include "Vector2dCameraRigParameterOverride.h"
#include "Vector2fCameraRigParameterOverride.h"
#include "Vector3dCameraRigParameterOverride.h"
#include "Vector3fCameraRigParameterOverride.h"
#include "Vector4dCameraRigParameterOverride.h"
#include "Vector4fCameraRigParameterOverride.h"
#include "CameraRigParameterOverrides.generated.h"

USTRUCT(BlueprintType)
struct FCameraRigParameterOverrides {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBooleanCameraRigParameterOverride> BooleanOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteger32CameraRigParameterOverride> Integer32Overrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatCameraRigParameterOverride> FloatOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDoubleCameraRigParameterOverride> DoubleOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2fCameraRigParameterOverride> Vector2fOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2dCameraRigParameterOverride> Vector2dOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3fCameraRigParameterOverride> Vector3fOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3dCameraRigParameterOverride> Vector3dOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4fCameraRigParameterOverride> Vector4fOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4dCameraRigParameterOverride> Vector4dOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator3fCameraRigParameterOverride> Rotator3fOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator3dCameraRigParameterOverride> Rotator3dOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform3fCameraRigParameterOverride> Transform3fOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform3dCameraRigParameterOverride> Transform3dOverrides;
    
public:
    GAMEPLAYCAMERAS_API FCameraRigParameterOverrides();
};

