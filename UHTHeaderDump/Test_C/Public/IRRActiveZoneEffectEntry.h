#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IRRActiveZoneEffectEntry.generated.h"

class UIRRZoneEffectSourceComponent;
class USimpleGameplayEffect;

USTRUCT(BlueprintType)
struct FIRRActiveZoneEffectEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIRRZoneEffectSourceComponent> Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USimpleGameplayEffect> EffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USimpleGameplayEffect> EffectInstance;
    
    TEST_C_API FIRRActiveZoneEffectEntry();
};

