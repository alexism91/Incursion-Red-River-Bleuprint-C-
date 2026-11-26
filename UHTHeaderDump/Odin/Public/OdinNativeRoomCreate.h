#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomCreateErrorDelegate.h"
#include "OdinNativeRoomCreateResponsePinDelegate.h"
#include "OdinNativeRoomCreateSuccessDelegate.h"
#include "OdinNativeRoomCreate.generated.h"

class UObject;
class UOdinNativeRoomCreate;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomCreate : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomCreateResponsePin OnResponse;
    
    UOdinNativeRoomCreate();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomCreate* RoomCreate(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& room, const FString& gateway, const FString& authentication, const FOdinNativeRoomCreateError& onError, const FOdinNativeRoomCreateSuccess& OnSuccess);
    
};

