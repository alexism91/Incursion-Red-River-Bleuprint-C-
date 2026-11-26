#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditExtrudeDirection.h"
#include "EPolyEditExtrudeDistanceMode.h"
#include "EPolyEditOffsetModeOptions.h"
#include "PolyEditOffsetProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDistanceMode DistanceMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditOffsetModeOptions DirectionMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShellsToSolids;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDirection MeasureDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseColinearityForSettingBorderGroups;
    
    UPolyEditOffsetProperties();

};

