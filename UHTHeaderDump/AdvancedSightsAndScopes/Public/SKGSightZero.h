#pragma once
#include "CoreMinimal.h"
#include "SKGSightZero.generated.h"

USTRUCT(BlueprintType)
struct FSKGSightZero {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Windage;
    
    ADVANCEDSIGHTSANDSCOPES_API FSKGSightZero();
};

