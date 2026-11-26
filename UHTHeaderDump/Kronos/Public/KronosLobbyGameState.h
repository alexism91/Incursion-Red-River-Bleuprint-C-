#pragma once
#include "CoreMinimal.h"
#include "EKronosLobbyState.h"
#include "KronosGameState.h"
#include "OnKronosLobbyStateChangedDelegate.h"
#include "OnKronosLobbyUpdatedDelegate.h"
#include "KronosLobbyGameState.generated.h"

class APawn;
class APlayerStart;

UCLASS(Blueprintable, NoExport)
class KRONOS_API AKronosLobbyGameState : public AKronosGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelocatePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocalPlayerStartTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyState, meta=(AllowPrivateAccess=true))
    EKronosLobbyState LobbyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyCountdownTime, meta=(AllowPrivateAccess=true))
    int32 LobbyTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerStart*, APawn*> PlayerStartMappings;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosLobbyStateChanged OnLobbyStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosLobbyUpdated OnLobbyUpdated;
    
    AKronosLobbyGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyCountdownTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEveryPlayerReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumReadyPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKronosLobbyState GetLobbyState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyCountdownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerStart* FindPlayerStart(APawn* PlayerPawn) const;
    
};

