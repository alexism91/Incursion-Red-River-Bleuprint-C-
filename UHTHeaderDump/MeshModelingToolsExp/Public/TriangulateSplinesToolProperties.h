#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ECombineCurvesMethod -FallbackName=ECombineCurvesMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EFlattenCurveMethod -FallbackName=EFlattenCurveMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EOffsetClosedCurvesMethod -FallbackName=EOffsetClosedCurvesMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EOffsetJoinMethod -FallbackName=EOffsetJoinMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EOffsetOpenCurvesMethod -FallbackName=EOffsetOpenCurvesMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EOpenCurveEndShapes -FallbackName=EOpenCurveEndShapes
#include "TriangulateSplinesToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTriangulateSplinesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlattenCurveMethod FlattenMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombineCurvesMethod CombineMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOffsetOpenCurvesMethod OpenCurves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurveOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOffsetClosedCurvesMethod OffsetClosedCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOpenCurveEndShapes EndShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOffsetJoinMethod JoinMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MiterLimit;
    
    UTriangulateSplinesToolProperties();

};

