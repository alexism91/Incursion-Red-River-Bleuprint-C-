#pragma once
#include "CoreMinimal.h"
#include "NDIDataChannelWriteSimCacheFrameBuffer.h"
#include "NDIDataChannelWriteSimCacheFrame.generated.h"

USTRUCT(BlueprintType)
struct FNDIDataChannelWriteSimCacheFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDIDataChannelWriteSimCacheFrameBuffer> VariableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleToGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleToCPUSims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleToGPUSims;
    
    NIAGARA_API FNDIDataChannelWriteSimCacheFrame();
};

