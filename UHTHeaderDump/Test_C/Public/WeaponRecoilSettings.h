#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WeaponRecoilCamera.h"
#include "WeaponRecoilNoise.h"
#include "WeaponRecoilVector.h"
#include "WeaponRecoilSettings.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UWeaponRecoilSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponRecoilVector RecoilLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponRecoilVector RecoilRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponRecoilNoise RecoilNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponRecoilCamera RecoilCamera;
    
    UWeaponRecoilSettings();

};

