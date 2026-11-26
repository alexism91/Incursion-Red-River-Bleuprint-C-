#pragma once
#include "CoreMinimal.h"
#include "OdinCustomEffect.h"
#include "OdinRmsEffect.generated.h"

class UObject;
class UOdinRmsEffect;

UCLASS(Blueprintable)
class ODIN_API UOdinRmsEffect : public UOdinCustomEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RmsDbfs;
    
    UOdinRmsEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinRmsEffect* ConstructRmsEffect(UObject* WorldContextObject);
    
};

