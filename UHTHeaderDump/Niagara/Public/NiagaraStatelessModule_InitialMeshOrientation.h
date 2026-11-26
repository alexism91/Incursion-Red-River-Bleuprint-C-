#pragma once
#include "CoreMinimal.h"
#include "ENSMInitialMeshOrientationMode.h"
#include "NiagaraDistributionRangeVector3.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_InitialMeshOrientation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_InitialMeshOrientation : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENSMInitialMeshOrientationMode MeshOrientationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 OrientationVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 MeshAxisToOrient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 Rotation;
    
    UNiagaraStatelessModule_InitialMeshOrientation();

};

