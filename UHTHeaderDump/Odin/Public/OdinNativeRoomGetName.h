#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomGetNameErrorDelegate.h"
#include "OdinNativeRoomGetNameResponsePinDelegate.h"
#include "OdinNativeRoomGetNameSuccessDelegate.h"
#include "OdinNativeRoomGetName.generated.h"

class UObject;
class UOdinNativeRoomGetName;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomGetName : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomGetNameResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString roomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomGetName();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomGetName* RoomGetName(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FOdinNativeRoomGetNameError& onError, const FOdinNativeRoomGetNameSuccess& OnSuccess);
    
};

