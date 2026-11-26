#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Notify_MeleeAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TEST_C_API UNotify_MeleeAttack : public UAnimNotify {
    GENERATED_BODY()
public:
    UNotify_MeleeAttack();

};

