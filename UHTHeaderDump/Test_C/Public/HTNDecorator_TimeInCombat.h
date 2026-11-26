#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "HTNDecorator_TimeInCombat.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_TimeInCombat : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeInCombat;
    
    UHTNDecorator_TimeInCombat();

};

