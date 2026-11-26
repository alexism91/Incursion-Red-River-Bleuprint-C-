#pragma once
#include "CoreMinimal.h"
#include "OdinCustomEffect.h"
#include "OdinVolumeEffect.generated.h"

class UObject;
class UOdinVolumeEffect;

UCLASS(Blueprintable)
class ODIN_API UOdinVolumeEffect : public UOdinCustomEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VolumeLog10;
    
    UOdinVolumeEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinVolumeEffect* ConstructVolumeEffect(UObject* WorldContextObject, float Scale);
    
};

