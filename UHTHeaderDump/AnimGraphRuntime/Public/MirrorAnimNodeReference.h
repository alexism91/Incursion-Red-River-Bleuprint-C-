#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "MirrorAnimNodeReference.generated.h"

USTRUCT(BlueprintType)
struct FMirrorAnimNodeReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FMirrorAnimNodeReference();
};

