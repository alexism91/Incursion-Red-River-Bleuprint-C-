#pragma once
#include "CoreMinimal.h"
#include "IRRMetricRef.generated.h"

USTRUCT(BlueprintType)
struct FIRRMetricRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Override;
    
    IRRCOREUI_API FIRRMetricRef();
};

