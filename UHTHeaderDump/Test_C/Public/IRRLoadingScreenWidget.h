#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "IRRLoadingScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRLoadingScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UIRRLoadingScreenWidget();

    UFUNCTION(BlueprintCallable)
    void NativeOnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void NativeDestruct();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLoadingScreenStop();
    
    UFUNCTION(BlueprintCallable)
    float GetLoadingScreenFadeInOutDuration();
    
};

