#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.generated.h"

USTRUCT(BlueprintType)
struct FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Focus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    CAMERACALIBRATIONCORE_API FDataTablePointInfoBase();
};

