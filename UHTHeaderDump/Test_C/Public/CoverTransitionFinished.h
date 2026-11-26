#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "CoverTransitionFinished.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TEST_C_API UCoverTransitionFinished : public UAnimNotify {
    GENERATED_BODY()
public:
    UCoverTransitionFinished();

};

