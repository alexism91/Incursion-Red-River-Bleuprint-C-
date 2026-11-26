#pragma once
#include "CoreMinimal.h"
#include "RuntimePartitionHLODSetup.h"
#include "Templates/SubclassOf.h"
#include "RuntimePartitionDesc.generated.h"

class URuntimePartition;

USTRUCT(BlueprintType)
struct FRuntimePartitionDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URuntimePartition> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URuntimePartition* MainLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimePartitionHLODSetup> HLODSetups;
    
    ENGINE_API FRuntimePartitionDesc();
};

