#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraSimCacheCustomStorageInterface.h"
#include "NiagaraDataInterfaceSimpleCounter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase, public INiagaraSimCacheCustomStorageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuSyncMode GpuSyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UNiagaraDataInterfaceSimpleCounter();


    // Fix for true pure virtual functions not being implemented
};

