#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "LPSPGameInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class LOWPOLYSHOOTERPACK_API ULPSPGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    ULPSPGameInstance();

};

