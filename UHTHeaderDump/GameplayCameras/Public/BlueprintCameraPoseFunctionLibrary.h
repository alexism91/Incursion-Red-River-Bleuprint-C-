#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Ray -FallbackName=Ray
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BlueprintCameraPose.h"
#include "BlueprintCameraPoseFunctionLibrary.generated.h"

class UCameraComponent;
class UCineCameraComponent;

UCLASS(Blueprintable)
class UBlueprintCameraPoseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintCameraPoseFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose SetTransform(const FBlueprintCameraPose& CameraPose, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose SetTargetDistance(const FBlueprintCameraPose& CameraPose, double TargetDistance);
    
    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose SetRotation(const FBlueprintCameraPose& CameraPose, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose SetLocation(const FBlueprintCameraPose& CameraPose, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose SetFocalLength(const FBlueprintCameraPose& CameraPose, float FocalLength);
    
    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose SetFieldOfView(const FBlueprintCameraPose& CameraPose, float FieldOfView);
    
    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose MakeCameraPoseFromCineCameraComponent(const UCineCameraComponent* CameraComponent);
    
    UFUNCTION(BlueprintCallable)
    static FBlueprintCameraPose MakeCameraPoseFromCameraComponent(const UCameraComponent* CameraComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTransform(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintPure)
    static double GetTargetDistance(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintPure)
    static FVector GetTargetAtDistance(const FBlueprintCameraPose& CameraPose, double TargetDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTarget(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintPure)
    static double GetSensorAspectRatio(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotation(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLocation(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintPure)
    static double GetFocalLength(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintPure)
    static double GetFieldOfView(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintPure)
    static double GetEffectiveFieldOfView(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRay GetAimRay(const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetAimDir(const FBlueprintCameraPose& CameraPose);
    
};

