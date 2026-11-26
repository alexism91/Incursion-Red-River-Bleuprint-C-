#pragma once
#include "CoreMinimal.h"
#include "EIRRDesignationStage.h"
#include "OnDesignationStageChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDesignationStageChanged, EIRRDesignationStage, NewStage, EIRRDesignationStage, OldStage);

