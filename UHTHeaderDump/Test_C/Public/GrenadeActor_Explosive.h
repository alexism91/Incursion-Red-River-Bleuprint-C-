#pragma once
#include "CoreMinimal.h"
#include "GrenadeActor.h"
#include "Templates/SubclassOf.h"
#include "GrenadeActor_Explosive.generated.h"

class UCurveFloat;
class UDamageType;
class URadialForceComponent;
class USphereComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AGrenadeActor_Explosive : public AGrenadeActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> ExplosionDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrapnelDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> ShrapnelDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageFalloffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ExplosionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadialForceComponent* RadialForce;
    
    AGrenadeActor_Explosive(const FObjectInitializer& ObjectInitializer);

};

