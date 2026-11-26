#pragma once
#include "CoreMinimal.h"
#include "OdinActivityEffectCallbackDelegate.h"
#include "OdinCustomEffect.h"
#include "OdinActivityEffect.generated.h"

class UObject;
class UOdinActivityEffect;

UCLASS(Blueprintable)
class ODIN_API UOdinActivityEffect : public UOdinCustomEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinActivityEffectCallback ActivityCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasActivity;
    
    UOdinActivityEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinActivityEffect* ConstructActivityEffect(UObject* WorldContextObject);
    
};

