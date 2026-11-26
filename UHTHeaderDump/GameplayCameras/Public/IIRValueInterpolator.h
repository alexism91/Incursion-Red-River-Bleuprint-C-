#pragma once
#include "CoreMinimal.h"
#include "CameraValueInterpolator.h"
#include "IIRValueInterpolator.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UIIRValueInterpolator : public UCameraValueInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFixedStep;
    
    UIIRValueInterpolator();

};

