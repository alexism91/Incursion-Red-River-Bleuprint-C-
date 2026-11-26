#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "KronosGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class KRONOS_API UKronosGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UKronosGameInstance();

};

