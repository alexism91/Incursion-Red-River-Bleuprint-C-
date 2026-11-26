#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EKronosUserAuthCompleteResult.h"
#include "EKronosUserAuthState.h"
#include "KronosUserAuthWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KRONOS_API UKronosUserAuthWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKronosUserAuthWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUserAuthStateChanged(EKronosUserAuthState NewState, EKronosUserAuthState PrevState, bool bIsInitialAuth);
    
    UFUNCTION(BlueprintCallable)
    void OnUserAuthStarted(bool bIsInitialAuth);
    
    UFUNCTION(BlueprintCallable)
    void OnUserAuthComplete(EKronosUserAuthCompleteResult Result, bool bWasInitialAuth, const FText& ErrorText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserAuthStateChanged(EKronosUserAuthState NewState, EKronosUserAuthState PrevState, bool bIsInitialAuth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserAuthStarted(bool bIsInitialAuth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserAuthComplete(EKronosUserAuthCompleteResult Result, bool bWasInitialAuth, const FText& ErrorText);
    
};

