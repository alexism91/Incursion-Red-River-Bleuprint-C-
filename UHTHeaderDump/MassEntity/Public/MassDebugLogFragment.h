#pragma once
#include "CoreMinimal.h"
#include "MassFragment.h"
#include "MassDebugLogFragment.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMassDebugLogFragment : public FMassFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> LogOwner;
    
    MASSENTITY_API FMassDebugLogFragment();
};

