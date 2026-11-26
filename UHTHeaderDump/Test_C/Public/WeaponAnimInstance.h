#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EasyBallistics -ObjectName=EFireMode -FallbackName=EFireMode
#include "ItemAnimInstance.h"
#include "WeaponAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TEST_C_API UWeaponAnimInstance : public UItemAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireMode FireMode;
    
    UWeaponAnimInstance();

};

