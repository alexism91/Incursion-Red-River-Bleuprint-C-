#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneServerClientMask.generated.h"

UENUM(BlueprintType, Flags)
enum class EMovieSceneServerClientMask : uint8 {
    None,
    Server,
    Client,
    All,
};

