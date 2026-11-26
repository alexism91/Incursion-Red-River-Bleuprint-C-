#pragma once
#include "CoreMinimal.h"
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDCollisionObjectQueryParams.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCollisionObjectQueryParams : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ObjectTypesToQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnoreMask;
    
    CHAOSVDRUNTIME_API FChaosVDCollisionObjectQueryParams();
};

