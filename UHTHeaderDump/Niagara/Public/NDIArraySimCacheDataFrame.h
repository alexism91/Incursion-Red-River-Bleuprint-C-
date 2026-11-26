#pragma once
#include "CoreMinimal.h"
#include "NDIArraySimCacheDataFrame.generated.h"

USTRUCT(BlueprintType)
struct FNDIArraySimCacheDataFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataOffset;
    
    NIAGARA_API FNDIArraySimCacheDataFrame();
};

