#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditPlanarProjectionUVActivity.generated.h"

class UCollectSurfacePathMechanic;
class UPolyEditActivityContext;
class UPolyEditPreviewMesh;
class UPolyEditSetUVProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditSetUVProperties* SetUVProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCollectSurfacePathMechanic* SurfacePathMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditPlanarProjectionUVActivity();

};

