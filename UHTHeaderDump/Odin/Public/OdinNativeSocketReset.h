#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeSocketResetErrorDelegate.h"
#include "OdinNativeSocketResetResponsePinDelegate.h"
#include "OdinNativeSocketResetSuccessDelegate.h"
#include "OdinNativeSocketReset.generated.h"

class UObject;
class UOdinNativeSocketReset;
class UOdinSocket;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeSocketReset : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeSocketResetResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOdinSocket> socket;
    
    UOdinNativeSocketReset();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeSocketReset* SocketReset(UObject* WorldContextObject, UPARAM(Ref) UOdinSocket*& NewSocket, const FOdinNativeSocketResetError& onError, const FOdinNativeSocketResetSuccess& OnSuccess);
    
};

