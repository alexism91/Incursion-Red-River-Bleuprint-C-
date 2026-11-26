#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "EKronosGameStateType.h"
#include "OnPlayerConnectedToKronosLobbyDelegate.h"
#include "OnPlayerDisconnectedFromKronosLobbyDelegate.h"
#include "KronosGameState.generated.h"

UCLASS(Blueprintable, NoExport)
class KRONOS_API AKronosGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKronosGameStateType GameStateType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerConnectedToKronosLobby OnPlayerConnectedToLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDisconnectedFromKronosLobby OnPlayerDisconnectedFromLobby;
    
    AKronosGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKronosGameStateType GetGameStateType() const;
    
};

