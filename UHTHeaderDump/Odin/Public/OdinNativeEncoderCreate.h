#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeEncoderCreateErrorDelegate.h"
#include "OdinNativeEncoderCreateResponsePinDelegate.h"
#include "OdinNativeEncoderCreateSuccessDelegate.h"
#include "OdinNativeEncoderCreate.generated.h"

class UObject;
class UOdinEncoder;
class UOdinNativeEncoderCreate;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeEncoderCreate : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeEncoderCreateResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PeerId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Stereo;
    
    UOdinNativeEncoderCreate();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeEncoderCreate* EncoderCreate(UObject* WorldContextObject, UPARAM(Ref) UOdinEncoder*& encoder, int64 peer_id, int32 sample_rate, const bool NewStereo, const FOdinNativeEncoderCreateError& onError, const FOdinNativeEncoderCreateSuccess& OnSuccess);
    
};

