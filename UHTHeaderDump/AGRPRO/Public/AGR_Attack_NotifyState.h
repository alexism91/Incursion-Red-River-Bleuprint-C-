#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AGR_Attack_NotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AGRPRO_API UAGR_Attack_NotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAGR_Attack_NotifyState();

};

