#pragma once
#include "CoreMinimal.h"
#include "EVersePackageScope.generated.h"

UENUM(BlueprintType)
enum class EVersePackageScope : uint8 {
    PublicAPI,
    InternalAPI,
    PublicUser,
    InternalUser,
};

