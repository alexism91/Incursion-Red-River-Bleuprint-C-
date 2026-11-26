#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Ray -FallbackName=Ray
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptAxis.h"
#include "GeometryScriptLibrary_TransformFunctions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_TransformFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform MakeTransformFromZAxis(FVector Location, FVector ZAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform MakeTransformFromAxes(FVector Location, FVector ZAxis, FVector TangentAxis, bool bTangentIsX);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTransformAxisVector(FTransform Transform, EGeometryScriptAxis Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRay GetTransformAxisRay(FTransform Transform, EGeometryScriptAxis Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlane GetTransformAxisPlane(FTransform Transform, EGeometryScriptAxis Axis);
    
};

