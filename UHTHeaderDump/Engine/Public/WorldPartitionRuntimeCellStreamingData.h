#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "WorldPartitionRuntimeCellStreamingData.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionRuntimeCellStreamingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath WorldAsset;
    
    ENGINE_API FWorldPartitionRuntimeCellStreamingData();
};

