#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BaseCreateFromSelectedCollisionProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseCreateFromSelectedCollisionProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransferCollision;
    
    UBaseCreateFromSelectedCollisionProperties();

};

