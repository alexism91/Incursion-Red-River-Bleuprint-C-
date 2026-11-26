#pragma once
#include "CoreMinimal.h"
#include "LPSPAttachment.h"
#include "LPSPGrip.generated.h"

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPGrip : public ALPSPAttachment {
    GENERATED_BODY()
public:
    ALPSPGrip(const FObjectInitializer& ObjectInitializer);

};

