#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraCompileHash -FallbackName=NiagaraCompileHash
#include "ENiagaraInterpolatedSpawnMode.h"
#include "NiagaraVMExecutableDataId.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVMExecutableDataId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CompilerVersionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraInterpolatedSpawnMode InterpolatedSpawnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraCompileHash BaseScriptCompileHash;
    
    NIAGARA_API FNiagaraVMExecutableDataId();
};

