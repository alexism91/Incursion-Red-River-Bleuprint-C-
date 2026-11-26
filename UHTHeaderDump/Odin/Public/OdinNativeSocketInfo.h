#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeSocketInfoErrorDelegate.h"
#include "OdinNativeSocketInfoResponsePinDelegate.h"
#include "OdinNativeSocketInfoSuccessDelegate.h"
#include "OdinSocketInfo.h"
#include "OdinNativeSocketInfo.generated.h"

class UObject;
class UOdinNativeSocketInfo;
class UOdinSocket;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeSocketInfo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeSocketInfoResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOdinSocket> socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinSocketInfo Info;
    
    UOdinNativeSocketInfo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeSocketInfo* SocketInfo(UObject* WorldContextObject, UPARAM(Ref) UOdinSocket*& NewSocket, const FOdinNativeSocketInfoError& onError, const FOdinNativeSocketInfoSuccess& OnSuccess);
    
};

