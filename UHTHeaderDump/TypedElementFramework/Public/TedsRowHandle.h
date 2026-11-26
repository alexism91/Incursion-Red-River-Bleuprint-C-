#pragma once
#include "CoreMinimal.h"
#include "TedsRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FTedsRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 RowHandle;
    
    TYPEDELEMENTFRAMEWORK_API FTedsRowHandle();
};

