#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRInputActionExecutable.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRCOREUI_API UIRRInputActionExecutable : public UObject {
    GENERATED_BODY()
public:
    UIRRInputActionExecutable();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteAction(UObject* Context, const FText& InputActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanExecuteAction(UObject* Context);
    
};

