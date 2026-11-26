#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomCloseErrorDelegate.h"
#include "OdinNativeRoomCloseResponsePinDelegate.h"
#include "OdinNativeRoomCloseSuccessDelegate.h"
#include "OdinNativeRoomClose.generated.h"

class UObject;
class UOdinNativeRoomClose;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomClose : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomCloseResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomClose();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomClose* RoomClose(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FOdinNativeRoomCloseError& onError, const FOdinNativeRoomCloseSuccess& OnSuccess);
    
};

