#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoftSkinnedMeshComponentDescriptor -FallbackName=SoftSkinnedMeshComponentDescriptor
#include "PCGSoftSkinnedMeshComponentDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FPCGSoftSkinnedMeshComponentDescriptor : public FSoftSkinnedMeshComponentDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentTags;
    
    PCG_API FPCGSoftSkinnedMeshComponentDescriptor();
};

