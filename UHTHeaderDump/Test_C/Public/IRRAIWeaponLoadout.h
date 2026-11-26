#pragma once
#include "CoreMinimal.h"
#include "IRRAIInventoryWeapon.h"
#include "IRRAIWeaponData.h"
#include "IRRAIWeaponLoadout.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIWeaponLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIWeaponData PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIWeaponData SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIWeaponData PistolWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIInventoryWeapon> InventoryWeapons;
    
    FIRRAIWeaponLoadout();
};

