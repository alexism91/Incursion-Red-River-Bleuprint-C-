#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ProgressSettings.h"
#include "WeaponRecoilVector.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FWeaponRecoilVector : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RecoilVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressSettings ProgressionSettings;
    
    TEST_C_API FWeaponRecoilVector();
};

