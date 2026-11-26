#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=IntervalCountdown -FallbackName=IntervalCountdown
#include "HTNExtension.h"
#include "HTNExtension_ServicePersistentTickCountdown.generated.h"

class UHTNService;

UCLASS(Blueprintable)
class HTN_API UHTNExtension_ServicePersistentTickCountdown : public UHTNExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UHTNService*, FIntervalCountdown> ServiceToCountdown;
    
public:
    UHTNExtension_ServicePersistentTickCountdown();

};

