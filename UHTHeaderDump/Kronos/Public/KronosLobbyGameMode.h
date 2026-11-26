#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "EKronosLobbyState.h"
#include "KronosLobbyGameMode.generated.h"

class AKronosLobbyGameState;

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosLobbyGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayersRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayersRequiredInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyFinalCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountdownOnlyIfEveryoneReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosLobbyGameState* LobbyGameState;
    
public:
    AKronosLobbyGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStartMatch();
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyTimer(const int32 InCountdownTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyState(const EKronosLobbyState InLobbyState, const int32 InCountdownTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPlayersReady();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TickLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnMatchStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitializeLobby();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKronosLobbyState GetLobbyState() const;
    
};

