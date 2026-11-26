#pragma once
#include "CoreMinimal.h"
#include "EAnimInstanceLocatorFragmentType.h"
#include "AnimInstanceLocatorFragment.generated.h"

USTRUCT(BlueprintType)
struct FAnimInstanceLocatorFragment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimInstanceLocatorFragmentType Type;
    
    ENGINE_API FAnimInstanceLocatorFragment();
};

