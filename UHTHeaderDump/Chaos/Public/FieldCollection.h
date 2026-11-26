#pragma once
#include "CoreMinimal.h"
#include "ManagedArrayCollection.h"
#include "FieldCollection.generated.h"

USTRUCT(BlueprintType)
struct FFieldCollection : public FManagedArrayCollection {
    GENERATED_BODY()
public:
    CHAOS_API FFieldCollection();
};

