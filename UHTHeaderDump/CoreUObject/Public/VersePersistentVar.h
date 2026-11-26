#pragma once
#include "CoreMinimal.h"
#include "VersePersistentVar.generated.h"

USTRUCT(BlueprintType)
struct FVersePersistentVar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FMapProperty> Property;
    
    COREUOBJECT_API FVersePersistentVar();
};

