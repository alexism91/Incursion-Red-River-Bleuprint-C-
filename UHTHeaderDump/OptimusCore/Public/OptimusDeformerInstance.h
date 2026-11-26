#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector4 -FallbackName=IntVector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformerInstance -FallbackName=MeshDeformerInstance
#include "OptimusDeformerInstanceExecInfo.h"
#include "OptimusDeformerInstance.generated.h"

class UMeshComponent;
class UOptimusDeformerInstanceSettings;

UCLASS(Blueprintable, MinimalAPI)
class UOptimusDeformerInstance : public UMeshDeformerInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusDeformerInstanceSettings> InstanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusDeformerInstanceExecInfo> ComputeGraphExecInfos;
    
public:
    UOptimusDeformerInstance();

    UFUNCTION(BlueprintCallable)
    bool SetVectorVariable(FName InVariableName, const FVector& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetVectorArrayVariable(FName InVariableName, const TArray<FVector>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetVector4Variable(FName InVariableName, const FVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetVector4ArrayVariable(FName InVariableName, const TArray<FVector4>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetVector2Variable(FName InVariableName, const FVector2D& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetVector2ArrayVariable(FName InVariableName, const TArray<FVector2D>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransformVariable(FName InVariableName, const FTransform& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransformArrayVariable(FName InVariableName, const TArray<FTransform>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetRotatorVariable(FName InVariableName, const FRotator& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetRotatorArrayVariable(FName InVariableName, const TArray<FRotator>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetQuatVariable(FName InVariableName, const FQuat& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetQuatArrayVariable(FName InVariableName, const TArray<FQuat>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetNameVariable(FName InVariableName, const FName& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetNameArrayVariable(FName InVariableName, const TArray<FName>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetLinearColorVariable(FName InVariableName, const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetLinearColorArrayVariable(FName InVariableName, const TArray<FLinearColor>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetIntVariable(FName InVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetIntArrayVariable(FName InVariableName, const TArray<int32>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt4Variable(FName InVariableName, const FIntVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt4ArrayVariable(FName InVariableName, const TArray<FIntVector4>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt3Variable(FName InVariableName, const FIntVector& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt3ArrayVariable(FName InVariableName, const TArray<FIntVector>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt2Variable(FName InVariableName, const FIntPoint& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt2ArrayVariable(FName InVariableName, const TArray<FIntPoint>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatVariable(FName InVariableName, double InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatArrayVariable(FName InVariableName, const TArray<double>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolVariable(FName InVariableName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolArrayVariable(FName InVariableName, const TArray<bool>& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool EnqueueTriggerGraph(FName InTriggerGraphName);
    
};

