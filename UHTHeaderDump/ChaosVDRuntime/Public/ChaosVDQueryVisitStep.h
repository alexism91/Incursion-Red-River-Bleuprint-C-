#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ChaosVDQueryFastData.h"
#include "ChaosVDQueryHitData.h"
#include "ChaosVDWrapperDataBase.h"
#include "EChaosVDCollisionQueryHitType.h"
#include "EChaosVDSQVisitRejectReason.h"
#include "EChaosVDSceneQueryVisitorType.h"
#include "ChaosVDQueryVisitStep.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDQueryVisitStep : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDSceneQueryVisitorType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ShapeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ParticleTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDQueryFastData QueryFastData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDCollisionQueryHitType HitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDQueryHitData HitData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDSQVisitRejectReason RejectReason;
    
    CHAOSVDRUNTIME_API FChaosVDQueryVisitStep();
};

