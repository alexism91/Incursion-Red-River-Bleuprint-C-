#pragma once
#include "CoreMinimal.h"
#include "NDIMemoryBufferSimCacheDataFrame.generated.h"

USTRUCT(BlueprintType)
struct FNDIMemoryBufferSimCacheDataFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CpuBufferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CpuDataOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GpuBufferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GpuDataOffset;
    
    NIAGARA_API FNDIMemoryBufferSimCacheDataFrame();
};

