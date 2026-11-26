#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "KronosLobbyPlayerControllerBase.generated.h"

UCLASS(Blueprintable, NoExport)
class KRONOS_API AKronosLobbyPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
    AKronosLobbyPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendChatMessage(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void SendChatMessage(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientReturnToMainMenuWithTextReason(const FText& ReturnReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientReceiveChatMessage(const FString& SenderName, const FString& Msg);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveChatMessage(const FString& SenderName, const FString& Msg);
    
};

