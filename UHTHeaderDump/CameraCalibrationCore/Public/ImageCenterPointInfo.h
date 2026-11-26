#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "ImageCenterInfo.h"
#include "ImageCenterPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FImageCenterPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageCenterInfo ImageCenterInfo;
    
    CAMERACALIBRATIONCORE_API FImageCenterPointInfo();
};

