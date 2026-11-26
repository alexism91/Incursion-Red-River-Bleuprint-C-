#pragma once
#include "CoreMinimal.h"
#include "SimpleAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FSimpleAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    TEST_C_API FSimpleAttributeData();
};

