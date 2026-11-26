#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomGetConnectionIdErrorDelegate.h"
#include "OdinNativeRoomGetConnectionIdResponsePinDelegate.h"
#include "OdinNativeRoomGetConnectionIdSuccessDelegate.h"
#include "OdinNativeRoomGetConnectionId.generated.h"

class UObject;
class UOdinNativeRoomGetConnectionId;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomGetConnectionId : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomGetConnectionIdResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 connectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomGetConnectionId();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomGetConnectionId* RoomGetConnectionId(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FOdinNativeRoomGetConnectionIdError& onError, const FOdinNativeRoomGetConnectionIdSuccess& OnSuccess);
    
};

