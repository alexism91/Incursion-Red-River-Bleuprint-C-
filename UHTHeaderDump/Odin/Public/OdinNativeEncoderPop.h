#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeEncoderPopErrorDelegate.h"
#include "OdinNativeEncoderPopResponsePinDelegate.h"
#include "OdinNativeEncoderPopSuccessDelegate.h"
#include "OdinNativeEncoderPop.generated.h"

class UObject;
class UOdinEncoder;
class UOdinNativeEncoderPop;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeEncoderPop : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeEncoderPopResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinEncoder* encoder;
    
    UOdinNativeEncoderPop();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeEncoderPop* EncoderPop(UObject* WorldContextObject, UPARAM(Ref) UOdinEncoder*& NewEncoder, const TArray<uint8>& Buffer, const FOdinNativeEncoderPopError& onError, const FOdinNativeEncoderPopSuccess& OnSuccess);
    
};

