#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeEncoderFreeErrorDelegate.h"
#include "OdinNativeEncoderFreeResponsePinDelegate.h"
#include "OdinNativeEncoderFreeSuccessDelegate.h"
#include "OdinNativeEncoderFree.generated.h"

class UObject;
class UOdinEncoder;
class UOdinNativeEncoderFree;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeEncoderFree : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeEncoderFreeResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinEncoder* encoder;
    
    UOdinNativeEncoderFree();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeEncoderFree* EncoderFree(UObject* WorldContextObject, UPARAM(Ref) UOdinEncoder*& NewEncoder, const FOdinNativeEncoderFreeError& onError, const FOdinNativeEncoderFreeSuccess& OnSuccess);
    
};

