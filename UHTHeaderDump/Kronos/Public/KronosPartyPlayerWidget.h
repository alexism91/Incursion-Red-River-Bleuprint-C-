#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "KronosPartyPlayerWidget.generated.h"

class AKronosPartyPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KRONOS_API UKronosPartyPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosPartyPlayerState* OwningPlayerState;
    
public:
    UKronosPartyPlayerWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerWidgetInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerIsReadyChanged(bool bIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerEloChanged(const int32& PlayerElo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPlayerDataChanged(const TArray<int32>& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void K2_OnPartyLeaderChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetPlayerUniqueId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerIsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerElo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPlayerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyPlayerState* GetOwningPartyPlayerState() const;
    
};

