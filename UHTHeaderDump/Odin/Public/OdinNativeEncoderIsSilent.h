#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeEncoderIsSilentErrorDelegate.h"
#include "OdinNativeEncoderIsSilentResponsePinDelegate.h"
#include "OdinNativeEncoderIsSilentSuccessDelegate.h"
#include "OdinNativeEncoderIsSilent.generated.h"

class UObject;
class UOdinEncoder;
class UOdinNativeEncoderIsSilent;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeEncoderIsSilent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeEncoderIsSilentResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinEncoder* encoder;
    
    UOdinNativeEncoderIsSilent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeEncoderIsSilent* EncoderIsSilent(UObject* WorldContextObject, UPARAM(Ref) UOdinEncoder*& decoder, const bool& bIsSilent, const FOdinNativeEncoderIsSilentError& onError, const FOdinNativeEncoderIsSilentSuccess& OnSuccess);
    
};

