#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "IRRInputActionInterface.h"
#include "IRRUserWidget.h"
#include "OnInputActionConsumedDelegate.h"
#include "IRRInputActionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRInputActionWidget : public UIRRUserWidget, public IIRRInputActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InputActionHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionConsumed OnInputActionConsumed;
    
    UIRRInputActionWidget();

    UFUNCTION(BlueprintCallable)
    bool ReceiveInput_Implementation(FKey Key);
    

    // Fix for true pure virtual functions not being implemented
};

