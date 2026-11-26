#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "KronosLobbyCharacter.generated.h"

UCLASS(Blueprintable, NoExport)
class TEST_C_API AKronosLobbyCharacter : public ACharacter {
    GENERATED_BODY()
public:
    AKronosLobbyCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnLobbyPlayerDataChanged(const TArray<int32>& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLobbyPlayerDataChanged(const TArray<int32>& PlayerData);
    
};

