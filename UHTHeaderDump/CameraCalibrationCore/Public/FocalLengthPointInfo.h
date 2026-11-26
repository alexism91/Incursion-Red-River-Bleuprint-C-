#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "FocalLengthInfo.h"
#include "FocalLengthPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FFocalLengthPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocalLengthInfo FocalLengthInfo;
    
    CAMERACALIBRATIONCORE_API FFocalLengthPointInfo();
};

