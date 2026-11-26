#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomFreeErrorDelegate.h"
#include "OdinNativeRoomFreeResponsePinDelegate.h"
#include "OdinNativeRoomFreeSuccessDelegate.h"
#include "OdinNativeRoomFree.generated.h"

class UObject;
class UOdinNativeRoomFree;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomFree : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomFreeResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomFree();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomFree* RoomFree(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FOdinNativeRoomFreeError& onError, const FOdinNativeRoomFreeSuccess& OnSuccess);
    
};

