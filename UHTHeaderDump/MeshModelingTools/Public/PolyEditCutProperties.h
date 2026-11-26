#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditCutPlaneOrientation.h"
#include "PolyEditCutProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditCutProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolyEditCutPlaneOrientation Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToVertices;
    
    UPolyEditCutProperties();

};

