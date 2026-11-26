#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "KronosLobbyPlayerWidget.generated.h"

class AKronosLobbyPawn;
class AKronosLobbyPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KRONOS_API UKronosLobbyPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosLobbyPlayerState* OwningPlayerState;
    
public:
    UKronosLobbyPlayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerNameChanged(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerIsReadyChanged(bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDisconnecting();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerWidgetInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerNameChanged(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerIsReadyChanged(bool bIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerDisconnecting();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPlayerWidget(AKronosLobbyPlayerState* InOwningPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosLobbyPlayerState* GetOwningLobbyPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosLobbyPawn* GetOwningLobbyPawn() const;
    
};

