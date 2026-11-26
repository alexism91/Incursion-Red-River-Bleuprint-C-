#pragma once
#include "CoreMinimal.h"
#include "LPSPAttachment.h"
#include "LPSPLaser.generated.h"

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPLaser : public ALPSPAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OffWhileSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OffWhileAiming;
    
    ALPSPLaser(const FObjectInitializer& ObjectInitializer);

};

