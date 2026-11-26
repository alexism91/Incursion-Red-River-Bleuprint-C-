#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EQUA_WeaponMontageType.h"
#include "QUA_AnimSet.h"
#include "QUA_BaseMontageSettings.h"
#include "QUA_Recoil.h"
#include "QUA_WeaponDurability.h"
#include "WeaponLegacyDataRenamedAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TEST_C_API UWeaponLegacyDataRenamedAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQUA_WeaponMontageType, FQUA_BaseMontageSettings> AnimMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_Recoil RecoilSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_WeaponDurability WeaponDurabilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_Muzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_Grip;
    
    UWeaponLegacyDataRenamedAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQUA_AnimSet GetAnimSetByType(EQUA_WeaponMontageType MontageType, FName Identifier);
    
};

