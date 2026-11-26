#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditExtrudeDirection.h"
#include "EPolyEditExtrudeDistanceMode.h"
#include "EPolyEditExtrudeModeOptions.h"
#include "PolyEditExtrudeProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDistanceMode DistanceMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeModeOptions DirectionMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDirection Direction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShellsToSolids;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDirection MeasureDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseColinearityForSettingBorderGroups;
    
    UPolyEditExtrudeProperties();

};

