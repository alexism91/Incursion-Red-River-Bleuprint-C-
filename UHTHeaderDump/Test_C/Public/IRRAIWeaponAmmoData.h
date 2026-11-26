#pragma once
#include "CoreMinimal.h"
#include "IRRAIWeaponAmmoData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIWeaponAmmoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBullets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagazineCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletRatio;
    
    FIRRAIWeaponAmmoData();
};

