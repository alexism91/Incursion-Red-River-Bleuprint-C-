#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditExtrudeEdgeDirectionMode.h"
#include "EPolyEditExtrudeEdgeDistanceMode.h"
#include "PolyEditExtrudeEdgeActivityProperties.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPolyEditExtrudeEdgeActivityProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeEdgeDirectionMode DirectionMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeEdgeDistanceMode DistanceMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUnselectedForFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustToExtrudeEvenly;
    
    UPolyEditExtrudeEdgeActivityProperties();

};

