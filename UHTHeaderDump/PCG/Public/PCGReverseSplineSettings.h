#pragma once
#include "CoreMinimal.h"
#include "EPCGReverseSplineOperation.h"
#include "PCGSettings.h"
#include "PCGReverseSplineSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGReverseSplineSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGReverseSplineOperation Operation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipClockwiseComputationResult;
    
public:
    UPCGReverseSplineSettings();

};

