#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EasyBallistics -ObjectName=EBBullet -FallbackName=EBBullet
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCore -ObjectName=IRRBulletHandle -FallbackName=IRRBulletHandle
#include "BaseBullet.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NoExport)
class TEST_C_API ABaseBullet : public AEBBullet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AINoiseRange_Unsuppressed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AINoiseRange_Suppressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImpactAINoiseTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ImpactAINoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBulletHandle BulletHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EffectiveRange;
    
    ABaseBullet(const FObjectInitializer& ObjectInitializer);

};

