#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BlueprintCameraEvaluationDataRef.h"
#include "BlueprintCameraVariableTableFunctionLibrary.generated.h"

class UBooleanCameraVariable;
class UDoubleCameraVariable;
class UFloatCameraVariable;
class UInteger32CameraVariable;
class URotator3dCameraVariable;
class UTransform3dCameraVariable;
class UVector2dCameraVariable;
class UVector3dCameraVariable;
class UVector4dCameraVariable;

UCLASS(Blueprintable)
class UBlueprintCameraVariableTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintCameraVariableTableFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetVector4CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UVector4dCameraVariable* Variable, const FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector3CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UVector3dCameraVariable* Variable, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector2CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UVector2dCameraVariable* Variable, const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UTransform3dCameraVariable* Variable, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, URotator3dCameraVariable* Variable, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteger32CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UInteger32CameraVariable* Variable, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UFloatCameraVariable* Variable, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UDoubleCameraVariable* Variable, double Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBooleanCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UBooleanCameraVariable* Variable, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 GetVector4CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UVector4dCameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVector3CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UVector3dCameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetVector2CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UVector2dCameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UTransform3dCameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRotatorCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, URotator3dCameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInteger32CameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UInteger32CameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UFloatCameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static double GetDoubleCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UDoubleCameraVariable* Variable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBooleanCameraVariable(const FBlueprintCameraEvaluationDataRef& CameraData, UBooleanCameraVariable* Variable);
    
};

