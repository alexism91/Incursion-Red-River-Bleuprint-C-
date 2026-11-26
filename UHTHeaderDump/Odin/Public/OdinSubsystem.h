#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "OdinSubsystem.generated.h"

UCLASS(Blueprintable)
class ODIN_API UOdinSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UOdinSubsystem();

};

