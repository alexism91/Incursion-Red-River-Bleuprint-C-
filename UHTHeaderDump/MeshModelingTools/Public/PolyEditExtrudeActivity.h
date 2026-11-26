#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditExtrudeActivity.generated.h"

class UPlaneDistanceFromHitMechanic;
class UPolyEditActivityContext;
class UPolyEditExtrudeProperties;
class UPolyEditOffsetProperties;
class UPolyEditPushPullProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditExtrudeActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditExtrudeProperties* ExtrudeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditOffsetProperties* OffsetProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditPushPullProperties* PushPullProperties;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditExtrudeActivity();

};

