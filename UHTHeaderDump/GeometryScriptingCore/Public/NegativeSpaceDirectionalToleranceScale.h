#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NegativeSpaceDirectionalToleranceScale.generated.h"

USTRUCT(BlueprintType)
struct FNegativeSpaceDirectionalToleranceScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngleRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleFactor;
    
    GEOMETRYSCRIPTINGCORE_API FNegativeSpaceDirectionalToleranceScale();
};

