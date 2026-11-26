#pragma once
#include "CoreMinimal.h"
#include "LensFilePicker.generated.h"

class ULensFile;

USTRUCT(BlueprintType)
struct FLensFilePicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultLensFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULensFile* LensFile;
    
    CAMERACALIBRATIONCORE_API FLensFilePicker();
};

