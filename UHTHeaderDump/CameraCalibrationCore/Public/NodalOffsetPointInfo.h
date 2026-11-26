#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "NodalPointOffset.h"
#include "NodalOffsetPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FNodalOffsetPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNodalPointOffset NodalPointOffset;
    
    CAMERACALIBRATIONCORE_API FNodalOffsetPointInfo();
};

