#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "STMapInfo.h"
#include "STMapPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FSTMapPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTMapInfo STMapInfo;
    
    CAMERACALIBRATIONCORE_API FSTMapPointInfo();
};

