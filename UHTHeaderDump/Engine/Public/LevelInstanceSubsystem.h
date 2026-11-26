#pragma once
#include "CoreMinimal.h"
#include "StreamingWorldSubsystemInterface.h"
#include "WorldSubsystem.h"
#include "LevelInstanceSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULevelInstanceSubsystem : public UWorldSubsystem, public IStreamingWorldSubsystemInterface {
    GENERATED_BODY()
public:
    ULevelInstanceSubsystem();


    // Fix for true pure virtual functions not being implemented
};

