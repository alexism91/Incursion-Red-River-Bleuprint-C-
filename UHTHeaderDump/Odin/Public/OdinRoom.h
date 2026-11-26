#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOdinSocketKind.h"
#include "OdinChangeSelf.h"
#include "OdinChannelMask.h"
#include "OdinConnectionStats.h"
#include "OdinError.h"
#include "OdinJoined.h"
#include "OdinMessageReceived.h"
#include "OdinNewReconnectToken.h"
#include "OdinPeerChanged.h"
#include "OdinPeerJoined.h"
#include "OdinPeerLeft.h"
#include "OdinRoomStatusChanged.h"
#include "OdinSendMessage.h"
#include "OdinSetChannelMasks.h"
#include "OdinRoom.generated.h"

class UOdinCrypto;
class UOdinDecoder;
class UOdinEncoder;
class UOdinHandle;
class UOdinRoom;
class UOdinSocket;

UCLASS(Blueprintable)
class ODIN_API UOdinRoom : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinSocketDelegate, UOdinSocket*, socket, TArray<uint8>, Message);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinRoomStatusChangedDelegate, UOdinRoom*, room, FOdinRoomStatusChanged, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinRoomRpcDelegate, UOdinRoom*, room, const FString&, Json);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinPeerLeftDelegate, UOdinRoom*, room, FOdinPeerLeft, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinPeerJoinedDelegate, UOdinRoom*, room, FOdinPeerJoined, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinPeerChangedDelegate, UOdinRoom*, room, FOdinPeerChanged, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinNewReconnectTokenDelegate, UOdinRoom*, room, FOdinNewReconnectToken, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinMessageReceivedDelegate, UOdinRoom*, room, FOdinMessageReceived, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinJoinedDelegate, UOdinRoom*, room, FOdinJoined, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinErrorDelegate, UOdinRoom*, room, FOdinError, Data);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinRoomRpcDelegate OnRpcBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinSocketDelegate OnSocketBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinRoomStatusChangedDelegate OnRoomStatusChangedBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNewReconnectTokenDelegate OnRoomNewReconnectTokenBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinMessageReceivedDelegate OnRoomMessageReceivedBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinJoinedDelegate OnRoomJoinedBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinPeerJoinedDelegate OnRoomPeerJoinedBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinPeerChangedDelegate OnRoomPeerChangedBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinPeerLeftDelegate OnRoomPeerLeftBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinErrorDelegate OnRoomErrorBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinCrypto* crypto;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinRoomStatusChanged Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNewReconnectToken ReconnectToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinJoined State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinHandle* Handle;
    
public:
    UOdinRoom();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPassword(const FString& Password) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetListenChannelMaskForPeer(int64 PeerId, FOdinChannelMask Mask);
    
    UFUNCTION(BlueprintCallable)
    bool SetListenChannelMask(FOdinChannelMask Mask);
    
    UFUNCTION(BlueprintCallable)
    bool SetChannelMasks(const FOdinSetChannelMasks& request);
    
    UFUNCTION(BlueprintCallable)
    bool SendRpc(const FString& Json);
    
    UFUNCTION(BlueprintCallable)
    bool SendMessage(const FOdinSendMessage& request);
    
    UFUNCTION(BlueprintCallable)
    bool SendAudio(UOdinEncoder* encoder);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSocketsForPeer(int64 PeerId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllSockets();
    
    UFUNCTION(BlueprintCallable)
    UOdinSocket* OpenSocket(int64 TargetPeerId, EOdinSocketKind SocketKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRoomName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetReconnectToken();
    
    UFUNCTION(BlueprintPure)
    int64 GetOwnPeerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOdinRoomName() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UOdinDecoder*> GetDecodersByPeer(const int64 PeerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOdinConnectionStats GetConnectionStats();
    
    UFUNCTION(BlueprintCallable)
    bool FreeRoom();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinRoom* ConstructRoom(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UOdinRoom* ConnectRoom(const FString& gateway, const FString& authentication, bool& bSuccess, UOdinCrypto* NewCrypto);
    
    UFUNCTION(BlueprintCallable)
    bool CloseRoom();
    
    UFUNCTION(BlueprintCallable)
    bool ClearListenChannelMaskForPeer(int64 PeerId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSelf(FOdinChangeSelf request);
    
};

