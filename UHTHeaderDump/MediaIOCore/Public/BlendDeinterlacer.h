#pragma once
#include "CoreMinimal.h"
#include "VideoDeinterlacer.h"
#include "BlendDeinterlacer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UBlendDeinterlacer : public UVideoDeinterlacer {
    GENERATED_BODY()
public:
    UBlendDeinterlacer();

};

