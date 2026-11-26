#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditInsertEdgeActivity.generated.h"

class UGroupEdgeInsertionProperties;
class UPolyEditActivityContext;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroupEdgeInsertionProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditInsertEdgeActivity();

};

