#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "IRRInRaidPlayerWidget.generated.h"

class APlayerState;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRInRaidPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* OwningPlayerState;
    
public:
    UIRRInRaidPlayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerNameChanged(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerTalkingChanged(bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerNameChanged(const FString& PlayerName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInitPlayerWidget(APlayerState* InOwningPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwningPlayerTalking() const;
    
    UFUNCTION(BlueprintCallable)
    void InitPlayerWidget(APlayerState* InOwningPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleVoiceTalkingChanged(APlayerState* Player, bool bIsTalking);
    
};

