#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceEmitterBinding.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceParticleRead.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataInterfaceEmitterBinding EmitterBinding;
    
    UNiagaraDataInterfaceParticleRead();

};

