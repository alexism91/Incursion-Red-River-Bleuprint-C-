#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomSendRpcErrorDelegate.h"
#include "OdinNativeRoomSendRpcResponsePinDelegate.h"
#include "OdinNativeRoomSendRpcSuccessDelegate.h"
#include "OdinNativeRoomSendRpc.generated.h"

class UObject;
class UOdinNativeRoomSendRpc;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomSendRpc : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomSendRpcResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomSendRpc();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomSendRpc* RoomSendRpc(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FString& rpcBody, const FOdinNativeRoomSendRpcError& onError, const FOdinNativeRoomSendRpcSuccess& OnSuccess);
    
};

