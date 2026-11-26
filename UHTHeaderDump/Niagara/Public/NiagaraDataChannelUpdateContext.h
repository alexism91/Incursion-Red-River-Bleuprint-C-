#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataChannelUpdateContext.generated.h"

class UNiagaraDataChannelReader;

USTRUCT(BlueprintType)
struct FNiagaraDataChannelUpdateContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelReader* Reader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstNewDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastNewDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewElementCount;
    
    NIAGARA_API FNiagaraDataChannelUpdateContext();
};

