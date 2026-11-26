#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PolyEditSetUVProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMaterial;
    
    UPolyEditSetUVProperties();

};

