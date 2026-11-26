#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionRangeInt.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_MeshIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_MeshIndex : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeInt MeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MeshIndexWeight;
    
    UNiagaraStatelessModule_MeshIndex();

    UFUNCTION(BlueprintCallable)
    bool NeedsMeshIndexWeights() const;
    
};

