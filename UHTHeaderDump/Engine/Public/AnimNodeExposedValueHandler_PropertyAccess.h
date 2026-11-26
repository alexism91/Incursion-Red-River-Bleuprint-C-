#pragma once
#include "CoreMinimal.h"
#include "AnimNodeExposedValueHandler_Base.h"
#include "ExposedValueCopyRecord.h"
#include "AnimNodeExposedValueHandler_PropertyAccess.generated.h"

USTRUCT(BlueprintType)
struct FAnimNodeExposedValueHandler_PropertyAccess : public FAnimNodeExposedValueHandler_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExposedValueCopyRecord> CopyRecords;
    
    ENGINE_API FAnimNodeExposedValueHandler_PropertyAccess();
};

