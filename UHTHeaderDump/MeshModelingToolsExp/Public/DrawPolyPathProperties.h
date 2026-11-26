#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDrawPolyPathExtrudeMode.h"
#include "EDrawPolyPathRadiusMode.h"
#include "EDrawPolyPathWidthMode.h"
#include "DrawPolyPathProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDrawPolyPathProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrawPolyPathWidthMode WidthMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoundedCorners;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrawPolyPathRadiusMode RadiusMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 RadialSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSinglePolyGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrawPolyPathExtrudeMode ExtrudeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RampStartRatio;
    
    UDrawPolyPathProperties();

};

