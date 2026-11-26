#pragma once
#include "CoreMinimal.h"
#include "OnMontageSectionChangedMCDelegateDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMontageSectionChangedMCDelegate, UAnimMontage*, Montage, FName, SectionName, bool, bLooped);

