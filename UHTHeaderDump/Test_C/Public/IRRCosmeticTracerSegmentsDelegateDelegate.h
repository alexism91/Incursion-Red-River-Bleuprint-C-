#pragma once
#include "CoreMinimal.h"
#include "IRRCosmeticTracerBatch.h"
#include "IRRCosmeticTracerSegmentsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRCosmeticTracerSegmentsDelegate, const FIRRCosmeticTracerBatch&, Segments);

