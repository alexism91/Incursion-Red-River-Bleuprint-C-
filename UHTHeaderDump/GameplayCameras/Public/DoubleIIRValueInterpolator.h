#pragma once
#include "CoreMinimal.h"
#include "CameraValueInterpolator.h"
#include "DoubleIIRValueInterpolator.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UDoubleIIRValueInterpolator : public UCameraValueInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimarySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntermediateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFixedStep;
    
    UDoubleIIRValueInterpolator();

};

