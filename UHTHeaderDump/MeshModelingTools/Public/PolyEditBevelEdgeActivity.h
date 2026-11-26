#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditBevelEdgeActivity.generated.h"

class UPolyEditActivityContext;
class UPolyEditBevelEdgeProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditBevelEdgeProperties* BevelProperties;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditBevelEdgeActivity();

};

