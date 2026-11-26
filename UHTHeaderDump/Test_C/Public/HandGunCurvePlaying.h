#pragma once
#include "CoreMinimal.h"
#include "HandGunCurvePlaying.generated.h"

class UFirstPersonHandGunCurveAnim;

USTRUCT(BlueprintType)
struct FHandGunCurvePlaying {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonHandGunCurveAnim* Clip;
    
    TEST_C_API FHandGunCurvePlaying();
};

