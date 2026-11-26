#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=LowPolyShooterPack -ObjectName=LPSPGameAbility -FallbackName=LPSPGameAbility
#include "QUA_WeaponActions.generated.h"

USTRUCT(BlueprintType)
struct FQUA_WeaponActions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPGameAbility Ability_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPGameAbility Ability_InspectMag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPGameAbility Ability_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPGameAbility Ability_ChamberAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPGameAbility Ability_SwitchFireMode;
    
    TEST_C_API FQUA_WeaponActions();
};

