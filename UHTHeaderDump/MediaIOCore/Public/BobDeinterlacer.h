#pragma once
#include "CoreMinimal.h"
#include "VideoDeinterlacer.h"
#include "BobDeinterlacer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UBobDeinterlacer : public UVideoDeinterlacer {
    GENERATED_BODY()
public:
    UBobDeinterlacer();

};

