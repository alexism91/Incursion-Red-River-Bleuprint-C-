#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeInitializeErrorDelegate.h"
#include "OdinNativeInitializeResponsePinDelegate.h"
#include "OdinNativeInitializeSuccessDelegate.h"
#include "OdinNativeInitialize.generated.h"

class UObject;
class UOdinNativeInitialize;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeInitialize : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeInitializeResponsePin OnResponse;
    
    UOdinNativeInitialize();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeInitialize* Initialize(UObject* WorldContextObject, const FString& Version, const FOdinNativeInitializeError& onError, const FOdinNativeInitializeSuccess& OnSuccess);
    
};

