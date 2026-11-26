#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AIDebugWidget.generated.h"

class APawn;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UAIDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UAIDebugWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugWidgetInitialized(APawn* AIPawn);
    
};

