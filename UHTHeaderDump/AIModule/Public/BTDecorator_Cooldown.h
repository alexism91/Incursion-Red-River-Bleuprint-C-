#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "ValueOrBBKey_Float.h"
#include "BTDecorator_Cooldown.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_Cooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float CoolDownTime;
    
    UBTDecorator_Cooldown();

};

