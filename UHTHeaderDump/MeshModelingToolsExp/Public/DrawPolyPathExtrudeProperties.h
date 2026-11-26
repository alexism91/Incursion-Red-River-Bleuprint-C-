#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDrawPolyPathExtrudeDirection.h"
#include "DrawPolyPathExtrudeProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrawPolyPathExtrudeDirection Direction;
    
    UDrawPolyPathExtrudeProperties();

};

