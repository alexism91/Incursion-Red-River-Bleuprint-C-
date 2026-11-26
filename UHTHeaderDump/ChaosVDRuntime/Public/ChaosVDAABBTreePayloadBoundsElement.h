#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDAABBTreePayloadBoundsElement.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDAABBTreePayloadBoundsElement : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    CHAOSVDRUNTIME_API FChaosVDAABBTreePayloadBoundsElement();
};

