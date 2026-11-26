#pragma once
#include "CoreMinimal.h"
#include "VideoDeinterlacer.h"
#include "DiscardDeinterlacer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UDiscardDeinterlacer : public UVideoDeinterlacer {
    GENERATED_BODY()
public:
    UDiscardDeinterlacer();

};

