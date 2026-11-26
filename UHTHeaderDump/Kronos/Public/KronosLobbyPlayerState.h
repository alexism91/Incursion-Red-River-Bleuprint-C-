#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "OnKronosLobbyPlayerDataChangedDelegate.h"
#include "OnKronosLobbyPlayerDisconnectingDelegate.h"
#include "OnKronosLobbyPlayerIsReadyChangedDelegate.h"
#include "OnKronosLobbyPlayerNameChangedDelegate.h"
#include "KronosLobbyPlayerState.generated.h"

UCLASS(Blueprintable, NoExport)
class KRONOS_API AKronosLobbyPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosLobbyPlayerNameChanged OnLobbyPlayerNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosLobbyPlayerIsReadyChanged OnLobbyPlayerIsReadyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosLobbyPlayerDataChanged OnLobbyPlayerDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosLobbyPlayerDisconnecting OnLobbyPlayerDisconnecting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReady, meta=(AllowPrivateAccess=true))
    bool bServerIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerData, meta=(AllowPrivateAccess=true))
    TArray<int32> ServerPlayerData;
    
public:
    AKronosLobbyPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TogglePlayerIsReady();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIsReady(bool bReady);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(const TArray<int32>& NewPlayerData);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerIsReady(bool bReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerData(const TArray<int32>& NewPlayerData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerIsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPlayerData() const;
    
};

