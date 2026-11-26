#pragma once
#include "CoreMinimal.h"
#include "PCGKernelPin.generated.h"

USTRUCT(BlueprintType)
struct FPCGKernelPin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KernelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInput;
    
    PCG_API FPCGKernelPin();
};
FORCEINLINE uint32 GetTypeHash(const FPCGKernelPin) { return 0; }

