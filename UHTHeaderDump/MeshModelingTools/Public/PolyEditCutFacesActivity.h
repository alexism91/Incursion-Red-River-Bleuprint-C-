#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditCutFacesActivity.generated.h"

class UCollectSurfacePathMechanic;
class UPolyEditActivityContext;
class UPolyEditCutProperties;
class UPolyEditPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditCutFacesActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditCutProperties* CutProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCollectSurfacePathMechanic* SurfacePathMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditCutFacesActivity();

};

