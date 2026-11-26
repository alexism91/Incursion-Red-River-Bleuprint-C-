#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "KronosLobbyHUD.generated.h"

class AKronosLobbyPlayerState;

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosLobbyHUD : public AHUD {
    GENERATED_BODY()
public:
    AKronosLobbyHUD(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeftLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinedLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerLeftLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerJoinedLobby(AKronosLobbyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInitialReplicationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasInitialReplicationFinished() const;
    
};

