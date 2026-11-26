#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLink -ObjectName=ELiveLinkTimecodeProviderEvaluationType -FallbackName=ELiveLinkTimecodeProviderEvaluationType
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "ELiveLinkHubTimecodeSource.h"
#include "LiveLinkHubTimecodeSettings.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkHubTimecodeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkHubTimecodeSource Source;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate DesiredFrameRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufferSize;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkTimecodeProviderEvaluationType EvaluationType;
    
    LIVELINKHUBMESSAGING_API FLiveLinkHubTimecodeSettings();
};

