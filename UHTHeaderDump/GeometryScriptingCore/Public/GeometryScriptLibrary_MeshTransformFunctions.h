#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptLibrary_MeshTransformFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshTransformFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TranslatePivotToLocation(UDynamicMesh* TargetMesh, FVector PivotLocation, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TranslateMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Translation, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TranslateMesh(UDynamicMesh* TargetMesh, FVector Translation, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TransformMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FTransform Transform, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TransformMesh(UDynamicMesh* TargetMesh, FTransform Transform, bool bFixOrientationForNegativeScale, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ScaleMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FVector Scale, FVector ScaleOrigin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ScaleMesh(UDynamicMesh* TargetMesh, FVector Scale, FVector ScaleOrigin, bool bFixOrientationForNegativeScale, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RotateMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FRotator Rotation, FVector RotationOrigin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RotateMesh(UDynamicMesh* TargetMesh, FRotator Rotation, FVector RotationOrigin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* InverseTransformMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FTransform Transform, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* InverseTransformMesh(UDynamicMesh* TargetMesh, FTransform Transform, bool bFixOrientationForNegativeScale, UGeometryScriptDebug* Debug);
    
};

