#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataDomainFlag.h"
#include "PCGMetadataDomainID.generated.h"

USTRUCT(BlueprintType)
struct FPCGMetadataDomainID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataDomainFlag Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    PCG_API FPCGMetadataDomainID();
};

