#pragma once
#include "CoreMinimal.h"
#include "EBrushToolSizeType.h"
#include "BrushToolRadius.generated.h"

USTRUCT(BlueprintType)
struct FBrushToolRadius {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrushToolSizeType SizeType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdaptiveSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToolSupportsPressureSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePressureSensitivity;
    
    MESHMODELINGTOOLS_API FBrushToolRadius();
};

