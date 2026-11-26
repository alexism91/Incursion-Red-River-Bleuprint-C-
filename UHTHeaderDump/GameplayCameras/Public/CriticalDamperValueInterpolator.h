#pragma once
#include "CoreMinimal.h"
#include "CameraValueInterpolator.h"
#include "CriticalDamperValueInterpolator.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCriticalDamperValueInterpolator : public UCameraValueInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampingFactor;
    
    UCriticalDamperValueInterpolator();

};

