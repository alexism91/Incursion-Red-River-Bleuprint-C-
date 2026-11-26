#pragma once
#include "CoreMinimal.h"
#include "SubObjectLocator.generated.h"

USTRUCT(BlueprintType)
struct FSubObjectLocator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathWithinContext;
    
    UNIVERSALOBJECTLOCATOR_API FSubObjectLocator();
};

