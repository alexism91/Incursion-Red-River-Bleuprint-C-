#pragma once
#include "CoreMinimal.h"
#include "EQueryNetMode.generated.h"

UENUM(BlueprintType)
namespace EQueryNetMode {
    enum Type {
        QNM_Server,
        QNM_Client,
        QNM_Both,
    };
}

