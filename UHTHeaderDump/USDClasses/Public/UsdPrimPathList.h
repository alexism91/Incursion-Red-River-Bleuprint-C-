#pragma once
#include "CoreMinimal.h"
#include "UsdPrimPathList.generated.h"

USTRUCT(BlueprintType)
struct FUsdPrimPathList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PrimPaths;
    
    USDCLASSES_API FUsdPrimPathList();
};

