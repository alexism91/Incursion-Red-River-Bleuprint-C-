#pragma once
#include "CoreMinimal.h"
#include "IRRMarkerOnUnHoveredDelegate.generated.h"

class UIRRMarkerWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRMarkerOnUnHovered, UIRRMarkerWidget*, MarkerRef);

