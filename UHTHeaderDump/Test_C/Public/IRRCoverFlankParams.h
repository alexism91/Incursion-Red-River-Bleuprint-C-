#pragma once
#include "CoreMinimal.h"
#include "IRRCoverFlankParams.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRCoverFlankParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlankMaxAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlankWeight;
    
    FIRRCoverFlankParams();
};

