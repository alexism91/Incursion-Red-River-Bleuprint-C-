#pragma once
#include "CoreMinimal.h"
#include "RenderTargetSize.generated.h"

USTRUCT(BlueprintType)
struct FRenderTargetSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    ADVANCEDSIGHTSANDSCOPES_API FRenderTargetSize();
};

