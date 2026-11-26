#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NDIDataChannelWriteSimCacheFrameBuffer.generated.h"

USTRUCT(BlueprintType)
struct FNDIDataChannelWriteSimCacheFrameBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableBase SourceVar;
    
    NIAGARA_API FNDIDataChannelWriteSimCacheFrameBuffer();
};

