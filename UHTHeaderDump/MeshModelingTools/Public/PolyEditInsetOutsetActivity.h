#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditInsetOutsetActivity.generated.h"

class UPolyEditActivityContext;
class UPolyEditInsetOutsetProperties;
class UPolyEditPreviewMesh;
class USpatialCurveDistanceMechanic;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditInsetOutsetProperties* Settings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpatialCurveDistanceMechanic* CurveDistMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditInsetOutsetActivity();

};

