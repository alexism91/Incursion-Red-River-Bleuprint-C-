#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
#include "PCGDefaultValueContainer.generated.h"

USTRUCT(BlueprintType)
struct FPCGDefaultValueContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ActivatedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag PropertyBag;
    
public:
    PCG_API FPCGDefaultValueContainer();
};

