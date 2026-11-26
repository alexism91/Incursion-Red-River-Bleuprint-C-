#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "ValueOrBBKey_Float.h"
#include "BTTask_MakeNoise.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_MakeNoise : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float Loudnes;
    
    UBTTask_MakeNoise();

};

