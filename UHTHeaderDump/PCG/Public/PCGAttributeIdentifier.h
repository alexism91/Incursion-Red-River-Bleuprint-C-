#pragma once
#include "CoreMinimal.h"
#include "PCGMetadataDomainID.h"
#include "PCGAttributeIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FPCGAttributeIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataDomainID MetadataDomain;
    
    PCG_API FPCGAttributeIdentifier();
};

