#pragma once
#include "CoreMinimal.h"
#include "IRRDefaultBriefingLine.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRRDefaultBriefingLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtitle;
    
    FIRRDefaultBriefingLine();
};

