#pragma once
#include "CoreMinimal.h"
#include "AISenseAffiliationFilter.h"
#include "AISenseConfig.h"
#include "AISenseConfig_Touch.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Config=Engine)
class UAISenseConfig_Touch : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Touch();

};

