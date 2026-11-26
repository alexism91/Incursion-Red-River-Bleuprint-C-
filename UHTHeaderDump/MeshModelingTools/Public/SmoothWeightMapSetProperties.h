#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=WeightMapSetProperties -FallbackName=WeightMapSetProperties
#include "SmoothWeightMapSetProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USmoothWeightMapSetProperties : public UWeightMapSetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSmoothMultiplier;
    
    USmoothWeightMapSetProperties();

};

