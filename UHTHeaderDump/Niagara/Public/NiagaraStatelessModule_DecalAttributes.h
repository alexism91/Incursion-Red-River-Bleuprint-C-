#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCoordinateSpace.h"
#include "NiagaraDistributionFloat.h"
#include "NiagaraDistributionVector3.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_DecalAttributes.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_DecalAttributes : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionVector3 Orientation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraCoordinateSpace OrientationCoordinateSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionVector3 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionFloat Fade;
    
    UNiagaraStatelessModule_DecalAttributes();

    UFUNCTION(BlueprintCallable)
    bool IsOrientationEnabled() const;
    
};

