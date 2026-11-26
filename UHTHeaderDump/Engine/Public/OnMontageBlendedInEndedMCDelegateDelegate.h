#pragma once
#include "CoreMinimal.h"
#include "OnMontageBlendedInEndedMCDelegateDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMontageBlendedInEndedMCDelegate, UAnimMontage*, Montage);

