#pragma once
#include "CoreMinimal.h"
#include "EOptimusValueType.h"
#include "OptimusValueIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FOptimusValueIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusValueType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    OPTIMUSCORE_API FOptimusValueIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FOptimusValueIdentifier) { return 0; }

