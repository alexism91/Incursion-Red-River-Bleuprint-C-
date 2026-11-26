#pragma once
#include "CoreMinimal.h"
#include "RigCurve.h"
#include "RigCurveContainer.generated.h"

USTRUCT(BlueprintType)
struct FRigCurveContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigCurve> Curves;
    
public:
    CONTROLRIG_API FRigCurveContainer();
};

