#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ULXRDebugCanvasWidget.generated.h"

class UListView;

UCLASS(Blueprintable, EditInlineNew)
class LXR_API UULXRDebugCanvasWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* DebugListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* LocalPlayerDebugListView;
    
    UULXRDebugCanvasWidget();

};

