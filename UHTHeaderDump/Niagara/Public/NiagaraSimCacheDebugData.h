#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraSimCacheDebugDataFrame.h"
#include "NiagaraSimCacheDebugData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraSimCacheDebugData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSimCacheDebugDataFrame> Frames;
    
    UNiagaraSimCacheDebugData();

};

