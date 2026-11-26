#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeSocketSendErrorDelegate.h"
#include "OdinNativeSocketSendResponsePinDelegate.h"
#include "OdinNativeSocketSendSuccessDelegate.h"
#include "OdinNativeSocketSend.generated.h"

class UObject;
class UOdinNativeSocketSend;
class UOdinSocket;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeSocketSend : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeSocketSendResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOdinSocket> socket;
    
    UOdinNativeSocketSend();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeSocketSend* SocketSend(UObject* WorldContextObject, UPARAM(Ref) UOdinSocket*& NewSocket, const TArray<uint8>& Message, const FOdinNativeSocketSendError& onError, const FOdinNativeSocketSendSuccess& OnSuccess);
    
};

