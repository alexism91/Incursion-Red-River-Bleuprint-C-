#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EKronosMatchmakingCompleteResult.h"
#include "EKronosMatchmakingState.h"
#include "KronosMatchmakingStateWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KRONOS_API UKronosMatchmakingStateWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKronosMatchmakingStateWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingUpdated(const EKronosMatchmakingState MatchmakingState, const int32 MatchmakingTime);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingComplete(const FName SessionName, const EKronosMatchmakingCompleteResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnMatchmakingUpdated(const EKronosMatchmakingState MatchmakingState, const int32 MatchmakingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnMatchmakingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnMatchmakingComplete(const EKronosMatchmakingCompleteResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnMatchmakingCanceled();
    
};

