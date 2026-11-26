#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilter.h"
#include "AlwaysRelevantNetObjectFilter.generated.h"

UCLASS(Blueprintable)
class UAlwaysRelevantNetObjectFilter : public UNetObjectFilter {
    GENERATED_BODY()
public:
    UAlwaysRelevantNetObjectFilter();

};

