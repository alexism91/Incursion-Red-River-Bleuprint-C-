#pragma once
#include "CoreMinimal.h"
#include "ChaosVDWrapperDataBase.h"
#include "EChaosVDAccelerationStructureType.h"
#include "ChaosVDAccelerationStructureBase.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDAccelerationStructureBase : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SolverId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDAccelerationStructureType Type;
    
    CHAOSVDRUNTIME_API FChaosVDAccelerationStructureBase();
};

