#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "DistortionInfo.h"
#include "DistortionPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FDistortionPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistortionInfo DistortionInfo;
    
    CAMERACALIBRATIONCORE_API FDistortionPointInfo();
};

