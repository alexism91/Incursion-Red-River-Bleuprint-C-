#pragma once
#include "CoreMinimal.h"
#include "SoundWaveCuePoint.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveCuePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CuePointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FramePosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FrameLength;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoopRegion;
    
public:
    AUDIOEXTENSIONS_API FSoundWaveCuePoint();
};

