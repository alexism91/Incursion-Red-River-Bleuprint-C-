#pragma once
#include "CoreMinimal.h"
#include "EOdinMuteEffectOptions.h"
#include "OdinCustomEffect.h"
#include "OdinMuteEffect.generated.h"

class UObject;
class UOdinMuteEffect;

UCLASS(Blueprintable)
class ODIN_API UOdinMuteEffect : public UOdinCustomEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOdinMuteEffectOptions MuteFlag;
    
    UOdinMuteEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinMuteEffect* ConstructMuteEffect(UObject* WorldContextObject, EOdinMuteEffectOptions Toggle);
    
};

