#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EQUA_WeaponMontageType.h"
#include "QUA_BaseMontageSettings.h"
#include "QUA_GripSettings.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FQUA_GripSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GripIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQUA_WeaponMontageType, FQUA_BaseMontageSettings> OverrideMontages;
    
    TEST_C_API FQUA_GripSettings();
};

