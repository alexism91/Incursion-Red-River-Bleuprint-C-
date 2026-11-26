#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptScalarList.h"
#include "GeometryScriptVectorList.h"
#include "GeometryScriptLibrary_VectorMathFunctions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_VectorMathFunctions();

    UFUNCTION(BlueprintCallable)
    static void VectorTransformInPlace(UPARAM(Ref) FGeometryScriptVectorList& VectorList, FTransform Transform, bool bAsPosition);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptScalarList VectorToScalar(FGeometryScriptVectorList VectorList, double ConstantX, double ConstantY, double ConstantZ);
    
    UFUNCTION(BlueprintCallable)
    static void VectorPlaneProjectInPlace(UPARAM(Ref) FGeometryScriptVectorList& VectorList, FPlane Plane);
    
    UFUNCTION(BlueprintCallable)
    static void VectorNormalizeInPlace(UPARAM(Ref) FGeometryScriptVectorList& VectorList, FVector SetOnFailure);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptScalarList VectorLength(FGeometryScriptVectorList VectorList);
    
    UFUNCTION(BlueprintCallable)
    static void VectorInverseTransformInPlace(UPARAM(Ref) FGeometryScriptVectorList& VectorList, FTransform Transform, bool bAsPosition);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptScalarList VectorDot(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptVectorList VectorCross(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB);
    
    UFUNCTION(BlueprintCallable)
    static void VectorBlendInPlace(FGeometryScriptVectorList VectorListA, UPARAM(Ref) FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptVectorList VectorBlend(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB, double ConstantA, double ConstantB);
    
    UFUNCTION(BlueprintCallable)
    static void ScalarVectorMultiplyInPlace(FGeometryScriptScalarList ScalarList, UPARAM(Ref) FGeometryScriptVectorList& VectorList, double ScalarMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptVectorList ScalarVectorMultiply(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList VectorList, double ScalarMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void ScalarMultiplyInPlace(FGeometryScriptScalarList ScalarListA, UPARAM(Ref) FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptScalarList ScalarMultiply(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void ScalarInvertInPlace(UPARAM(Ref) FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptScalarList ScalarInvert(FGeometryScriptScalarList ScalarList, double Numerator, double SetOnFailure, double Epsilon);
    
    UFUNCTION(BlueprintCallable)
    static void ScalarBlendInPlace(FGeometryScriptScalarList ScalarListA, UPARAM(Ref) FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptScalarList ScalarBlend(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantA, double ConstantB);
    
    UFUNCTION(BlueprintCallable)
    static void ConstantVectorMultiplyInPlace(double Constant, UPARAM(Ref) FGeometryScriptVectorList& VectorList);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptVectorList ConstantVectorMultiply(double Constant, FGeometryScriptVectorList VectorList);
    
    UFUNCTION(BlueprintCallable)
    static void ConstantScalarMultiplyInPlace(double Constant, UPARAM(Ref) FGeometryScriptScalarList& ScalarList);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptScalarList ConstantScalarMultiply(double Constant, FGeometryScriptScalarList ScalarList);
    
};

