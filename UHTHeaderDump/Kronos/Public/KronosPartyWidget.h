#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "KronosPartyWidget.generated.h"

class AKronosPartyPlayerState;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KRONOS_API UKronosPartyWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateEntryForLocalPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* PartyPlayerEntryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* PartySlotEntryBox;
    
public:
    UKronosPartyWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateRemoved(AKronosPartyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAdded(AKronosPartyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeftParty(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinedParty(const FText& DisplayName, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnDisconnectedFromParty();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectedToParty();
    
    UFUNCTION(BlueprintCallable)
    void OnChatMessageReceived(const FUniqueNetIdRepl& SenderId, const FString& Msg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerLeftParty(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerJoinedParty(const FText& DisplayName, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDisconnectedFromParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConnectedToParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnChatMessageReceived(const FUniqueNetIdRepl& SenderId, const FString& Msg);
    
};

