#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditInsertEdgeLoopActivity.generated.h"

class UEdgeLoopInsertionProperties;
class UPolyEditActivityContext;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEdgeLoopInsertionProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditInsertEdgeLoopActivity();

};

