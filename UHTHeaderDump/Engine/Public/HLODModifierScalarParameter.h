#pragma once
#include "CoreMinimal.h"
#include "HLODModifierScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FHLODModifierScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideValue;
    
    ENGINE_API FHLODModifierScalarParameter();
};

