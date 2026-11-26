#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeDecoderIsSilentErrorDelegate.h"
#include "OdinNativeDecoderIsSilentResponsePinDelegate.h"
#include "OdinNativeDecoderIsSilentSuccessDelegate.h"
#include "OdinNativeDecoderIsSilent.generated.h"

class UObject;
class UOdinDecoder;
class UOdinNativeDecoderIsSilent;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeDecoderIsSilent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeDecoderIsSilentResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinDecoder* decoder;
    
    UOdinNativeDecoderIsSilent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeDecoderIsSilent* DecoderIsSilent(UObject* WorldContextObject, UPARAM(Ref) UOdinDecoder*& NewDecoder, const bool& bIsSilent, const FOdinNativeDecoderIsSilentError& onError, const FOdinNativeDecoderIsSilentSuccess& OnSuccess);
    
};

