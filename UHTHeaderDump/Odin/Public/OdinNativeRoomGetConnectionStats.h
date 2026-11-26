#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeRoomGetConnectionStatsErrorDelegate.h"
#include "OdinNativeRoomGetConnectionStatsResponsePinDelegate.h"
#include "OdinNativeRoomGetConnectionStatsSuccessDelegate.h"
#include "OdinNativeRoomGetConnectionStats.generated.h"

class UObject;
class UOdinNativeRoomGetConnectionStats;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeRoomGetConnectionStats : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeRoomGetConnectionStatsResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UOdinNativeRoomGetConnectionStats();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeRoomGetConnectionStats* RoomGetConnectionStats(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& NewRoom, const FOdinNativeRoomGetConnectionStatsError& onError, const FOdinNativeRoomGetConnectionStatsSuccess& OnSuccess);
    
};

