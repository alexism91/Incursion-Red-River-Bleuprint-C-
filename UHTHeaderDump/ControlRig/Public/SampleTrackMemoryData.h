#pragma once
#include "CoreMinimal.h"
#include "SampleTrackMemoryData.generated.h"

USTRUCT(BlueprintType)
struct FSampleTrackMemoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Buffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ObjectPaths;
    
    CONTROLRIG_API FSampleTrackMemoryData();
};

