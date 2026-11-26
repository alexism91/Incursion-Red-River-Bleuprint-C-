#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.h"
#include "NiagaraDataInterface.h"
#include "NiagaraSimCacheCustomStorageInterface.h"
#include "NiagaraDataInterfaceMemoryBuffer.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceMemoryBuffer : public UNiagaraDataInterface, public INiagaraSimCacheCustomStorageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultNumElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuSyncMode GpuSyncMode;
    
    UNiagaraDataInterfaceMemoryBuffer();


    // Fix for true pure virtual functions not being implemented
};

