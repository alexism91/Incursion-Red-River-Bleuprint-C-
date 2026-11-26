#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=WeightMapSetProperties -FallbackName=WeightMapSetProperties
#include "OffsetWeightMapSetProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UOffsetWeightMapSetProperties();

};

