#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomSendDatagramErrorDelegate.h"
#include "OdinNativeRoomSendDatagramResponsePinDelegate.h"
#include "OdinNativeRoomSendDatagramSuccessDelegate.h"
#include "OdinNativeRoomSendDatagram.generated.h"

class UObject;
class UOdinNativeRoomSendDatagram;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomSendDatagram : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomSendDatagramResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomSendDatagram();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomSendDatagram* RoomSendDatagram(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const TArray<uint8>& datagram, const FOdinNativeRoomSendDatagramError& onError, const FOdinNativeRoomSendDatagramSuccess& OnSuccess);
    
};

