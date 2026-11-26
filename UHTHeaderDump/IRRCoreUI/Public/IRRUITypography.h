#pragma once
#include "CoreMinimal.h"
#include "IRRUITypography.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FIRRUITypography {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> LabelFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ValueFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Sizes;
    
    IRRCOREUI_API FIRRUITypography();
};

