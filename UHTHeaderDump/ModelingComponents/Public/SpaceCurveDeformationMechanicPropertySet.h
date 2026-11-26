#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ESpaceCurveControlPointFalloffType.h"
#include "ESpaceCurveControlPointOriginMode.h"
#include "ESpaceCurveControlPointTransformMode.h"
#include "SpaceCurveDeformationMechanicPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpaceCurveControlPointTransformMode TransformMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpaceCurveControlPointOriginMode TransformOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Softness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpaceCurveControlPointFalloffType SoftFalloff;
    
    USpaceCurveDeformationMechanicPropertySet();

};

