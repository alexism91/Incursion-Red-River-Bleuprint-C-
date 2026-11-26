#pragma once
#include "CoreMinimal.h"
#include "EDirection.h"
#include "CoordinateSystem.generated.h"

USTRUCT(BlueprintType)
struct FCoordinateSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirection XAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirection YAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirection ZAxis;
    
    RIGLOGICMODULE_API FCoordinateSystem();
};

