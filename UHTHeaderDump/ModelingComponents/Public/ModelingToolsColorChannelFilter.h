#pragma once
#include "CoreMinimal.h"
#include "ModelingToolsColorChannelFilter.generated.h"

USTRUCT(BlueprintType)
struct FModelingToolsColorChannelFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlpha;
    
    MODELINGCOMPONENTS_API FModelingToolsColorChannelFilter();
};

