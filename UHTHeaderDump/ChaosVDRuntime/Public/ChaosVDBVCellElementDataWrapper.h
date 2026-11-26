#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDBVCellElementDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDBVCellElementDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleIndex;
    
    CHAOSVDRUNTIME_API FChaosVDBVCellElementDataWrapper();
};

