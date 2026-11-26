#pragma once
#include "CoreMinimal.h"
#include "IRRMarkerOnHoveredDelegate.generated.h"

class UIRRMarkerWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRMarkerOnHovered, UIRRMarkerWidget*, MarkerRef);

