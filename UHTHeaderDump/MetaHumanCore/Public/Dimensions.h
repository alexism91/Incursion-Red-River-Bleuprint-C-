#pragma once
#include "CoreMinimal.h"
#include "Dimensions.generated.h"

USTRUCT(BlueprintType)
struct FDimensions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    METAHUMANCORE_API FDimensions();
};

