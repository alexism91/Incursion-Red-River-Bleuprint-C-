#pragma once
#include "CoreMinimal.h"
#include "IRRLoadingScreenHint.h"
#include "IRRLoadingScreenData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMONLOADINGSETTINGS_API FIRRLoadingScreenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForManualStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowControlTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Backgrounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoadingScreenHint> Hints;
    
    FIRRLoadingScreenData();
};

