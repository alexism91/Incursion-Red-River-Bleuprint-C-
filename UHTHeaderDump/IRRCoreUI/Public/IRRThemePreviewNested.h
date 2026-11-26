#pragma once
#include "CoreMinimal.h"
#include "EIRRThemePreviewMode.h"
#include "IRRThemePreviewNested.generated.h"

USTRUCT(BlueprintType)
struct FIRRThemePreviewNested {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngagementRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRThemePreviewMode Posture;
    
    IRRCOREUI_API FIRRThemePreviewNested();
};

