#pragma once
#include "CoreMinimal.h"
#include "OdinCustomEffect.h"
#include "OdinRestGSTTEffectResponseDelegate.h"
#include "OdinRestGSTTEffect.generated.h"

class UObject;
class UOdinRestGSTTEffect;

UCLASS(Blueprintable)
class ODIN_API UOdinRestGSTTEffect : public UOdinCustomEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinRestGSTTEffectResponse PostResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStereo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UOdinRestGSTTEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinRestGSTTEffect* ConstructRestGSTTEffect(UObject* WorldContextObject);
    
};

