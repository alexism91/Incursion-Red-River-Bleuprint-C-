#pragma once
#include "CoreMinimal.h"
#include "PCGCrc.generated.h"

USTRUCT(BlueprintType)
struct FPCGCrc {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
public:
    PCG_API FPCGCrc();
};

