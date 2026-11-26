#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "EIRRWeaponSlot.h"
#include "HTNDecorator_IsSlotEquipped.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_IsSlotEquipped : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRWeaponSlot Slot;
    
    UHTNDecorator_IsSlotEquipped();

};

