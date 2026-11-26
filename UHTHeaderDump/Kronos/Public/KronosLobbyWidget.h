#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EKronosLobbyState.h"
#include "KronosLobbyWidget.generated.h"

class AKronosLobbyGameState;
class AKronosLobbyPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KRONOS_API UKronosLobbyWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKronosLobbyWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeftLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinedLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerIsReadyChanged(bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdated(const EKronosLobbyState LobbyState, const int32 LobbyCountdownTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnStartingMatchCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnStartingMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerLeftLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerJoinedLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerIsReadyChanged(bool bIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnLobbyWidgetInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnLobbyUpdated(const EKronosLobbyState LobbyState, const int32 LobbyCountdownTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerHasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosLobbyPlayerState* GetLocalPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosLobbyGameState* GetLobbyGameState() const;
    
};

