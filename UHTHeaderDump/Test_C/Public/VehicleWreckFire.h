#pragma once
#include "CoreMinimal.h"
#include "VehicleWreckFire.generated.h"

class UAkComponent;
class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FVehicleWreckFire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* Emitter;
    
    TEST_C_API FVehicleWreckFire();
};

