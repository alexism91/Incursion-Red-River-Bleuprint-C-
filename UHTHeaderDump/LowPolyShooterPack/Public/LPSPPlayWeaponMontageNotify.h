#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "LPSPPlayWeaponMontageNotify.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories)
class LOWPOLYSHOOTERPACK_API ULPSPPlayWeaponMontageNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
public:
    ULPSPPlayWeaponMontageNotify();

};

