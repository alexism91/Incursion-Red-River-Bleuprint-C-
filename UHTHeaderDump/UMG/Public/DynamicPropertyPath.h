#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyPath -ObjectName=CachedPropertyPath -FallbackName=CachedPropertyPath
#include "DynamicPropertyPath.generated.h"

USTRUCT(BlueprintType)
struct FDynamicPropertyPath : public FCachedPropertyPath {
    GENERATED_BODY()
public:
    UMG_API FDynamicPropertyPath();
};

