#pragma once
#include "CoreMinimal.h"
#include "OdinCloneEffectResponseDelegate.h"
#include "OdinCustomEffect.h"
#include "OdinCloneEffect.generated.h"

class UObject;
class UOdinCloneEffect;

UCLASS(Blueprintable)
class ODIN_API UOdinCloneEffect : public UOdinCustomEffect {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinDispatchCloneCallbackDelegate, const TArray<float>&, SampleData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinDispatchCloneCallbackDelegate OnDispatchCloneCallbackBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinCloneEffectResponse PostResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Stereo;
    
    UOdinCloneEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinCloneEffect* ConstructCloneEffect(UObject* WorldContextObject);
    
};

