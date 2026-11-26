#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomSendLoopbackRpcErrorDelegate.h"
#include "OdinNativeRoomSendLoopbackRpcResponsePinDelegate.h"
#include "OdinNativeRoomSendLoopbackRpcSuccessDelegate.h"
#include "OdinNativeRoomSendLoopbackRpc.generated.h"

class UObject;
class UOdinNativeRoomSendLoopbackRpc;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomSendLoopbackRpc : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomSendLoopbackRpcResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomSendLoopbackRpc();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomSendLoopbackRpc* RoomSendLoopbackRpc(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FString& rpcBody, const FOdinNativeRoomSendLoopbackRpcError& onError, const FOdinNativeRoomSendLoopbackRpcSuccess& OnSuccess);
    
};

