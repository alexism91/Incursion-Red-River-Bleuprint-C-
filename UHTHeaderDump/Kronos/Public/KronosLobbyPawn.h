#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "KronosLobbyPawn.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable, NoExport)
class KRONOS_API AKronosLobbyPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
public:
    AKronosLobbyPawn(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLobbyPlayerDataChanged(const TArray<int32>& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLobbyPlayerDataChanged(const TArray<int32>& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInitialReplicationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasInitialReplicationFinished() const;
    
};

