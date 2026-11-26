#pragma once
#include "CoreMinimal.h"
#include "IRRPlayerOutfitOption.generated.h"

class UIRRAppearanceSetup;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRPlayerOutfitOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRAppearanceSetup> Appearance;
    
    FIRRPlayerOutfitOption();
};

