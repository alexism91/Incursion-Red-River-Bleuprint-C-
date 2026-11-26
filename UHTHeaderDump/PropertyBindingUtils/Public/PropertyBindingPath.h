#pragma once
#include "CoreMinimal.h"
#include "PropertyBindingPathSegment.h"
#include "PropertyBindingPath.generated.h"

USTRUCT(BlueprintType)
struct FPropertyBindingPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyBindingPathSegment> Segments;
    
public:
    PROPERTYBINDINGUTILS_API FPropertyBindingPath();
};

