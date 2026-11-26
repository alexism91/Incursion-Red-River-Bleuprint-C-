#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ChaosVDWrapperDataBase.h"
#include "EChaosVDParticleContext.h"
#include "ChaosVDDebugDrawShapeBase.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDDebugDrawShapeBase : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SolverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDParticleContext ThreadContext;
    
    CHAOSVDRUNTIME_API FChaosVDDebugDrawShapeBase();
};

