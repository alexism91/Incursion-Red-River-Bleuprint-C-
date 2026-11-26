#pragma once
#include "CoreMinimal.h"
#include "MassObserversMap.h"
#include "MassObserverManager.generated.h"

USTRUCT(BlueprintType)
struct FMassObserverManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassObserversMap FragmentObservers[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassObserversMap TagObservers[2];
    
public:
    MASSENTITY_API FMassObserverManager();
};

