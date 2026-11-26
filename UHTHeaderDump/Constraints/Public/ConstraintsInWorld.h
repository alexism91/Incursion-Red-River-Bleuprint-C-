#pragma once
#include "CoreMinimal.h"
#include "ConstraintsInWorld.generated.h"

class UTickableConstraint;
class UWorld;

USTRUCT(BlueprintType)
struct FConstraintsInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UTickableConstraint>> Constraints;
    
    CONSTRAINTS_API FConstraintsInWorld();
};

