#pragma once
#include "CoreMinimal.h"
#include "MediaPlayerInitialTrackLanguageSelection.generated.h"

USTRUCT(BlueprintType)
struct FMediaPlayerInitialTrackLanguageSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Video;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Caption;
    
    MEDIAUTILS_API FMediaPlayerInitialTrackLanguageSelection();
};

