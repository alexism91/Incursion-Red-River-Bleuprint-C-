#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "KronosSearchResult.h"
#include "KronosMatchmakingSessionWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KRONOS_API UKronosMatchmakingSessionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKronosMatchmakingSessionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnSessionWidgetInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitSessionWidget(const FKronosSearchResult& InOwningSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKronosSearchResult GetOwningSession();
    
};

