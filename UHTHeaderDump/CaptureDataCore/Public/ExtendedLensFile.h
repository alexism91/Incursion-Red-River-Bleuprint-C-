#pragma once
#include "CoreMinimal.h"
#include "ExtendedLensFile.generated.h"

class ULensFile;

USTRUCT(BlueprintType)
struct FExtendedLensFile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDepthCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULensFile* LensFile;
    
    CAPTUREDATACORE_API FExtendedLensFile();
};

