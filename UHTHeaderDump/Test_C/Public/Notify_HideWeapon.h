#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "Notify_HideWeapon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UNotify_HideWeapon : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UNotify_HideWeapon();

};

