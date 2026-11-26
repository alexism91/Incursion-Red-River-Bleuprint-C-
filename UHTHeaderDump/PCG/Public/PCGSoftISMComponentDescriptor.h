#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoftISMComponentDescriptor -FallbackName=SoftISMComponentDescriptor
#include "PCGSoftISMComponentDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FPCGSoftISMComponentDescriptor : public FSoftISMComponentDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdditionalCommaSeparatedTags;
    
    PCG_API FPCGSoftISMComponentDescriptor();
};

