#pragma once
#include "CoreMinimal.h"
#include "BaseParameterNameAndValue.generated.h"

USTRUCT(BlueprintType)
struct FBaseParameterNameAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    MOVIESCENETRACKS_API FBaseParameterNameAndValue();
};

