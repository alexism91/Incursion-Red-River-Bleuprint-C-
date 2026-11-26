#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomResendUserDataErrorDelegate.h"
#include "OdinNativeRoomResendUserDataResponsePinDelegate.h"
#include "OdinNativeRoomResendUserDataSuccessDelegate.h"
#include "OdinNativeRoomResendUserData.generated.h"

class UObject;
class UOdinNativeRoomResendUserData;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomResendUserData : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomResendUserDataResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomResendUserData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomResendUserData* RoomResendUserData(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FOdinNativeRoomResendUserDataError& onError, const FOdinNativeRoomResendUserDataSuccess& OnSuccess);
    
};

