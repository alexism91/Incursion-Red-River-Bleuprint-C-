#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "QUA_WeaponInfluenceSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FQUA_WeaponInfluenceSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WeaponWeightMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WeaponLengthCurveMultiplier;
    
    TEST_C_API FQUA_WeaponInfluenceSettings();
};

