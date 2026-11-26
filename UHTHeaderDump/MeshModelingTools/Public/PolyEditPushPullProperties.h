#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditExtrudeDirection.h"
#include "EPolyEditExtrudeDistanceMode.h"
#include "EPolyEditPushPullModeOptions.h"
#include "PolyEditPushPullProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditPushPullProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDistanceMode DistanceMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditPushPullModeOptions DirectionMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDirection SingleDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShellsToSolids;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditExtrudeDirection MeasureDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseColinearityForSettingBorderGroups;
    
    UPolyEditPushPullProperties();

};

