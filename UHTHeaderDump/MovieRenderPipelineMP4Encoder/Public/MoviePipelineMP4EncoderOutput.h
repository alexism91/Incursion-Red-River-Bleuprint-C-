#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineVideoOutputBase -FallbackName=MoviePipelineVideoOutputBase
#include "EMoviePipelineMP4EncodeLevel.h"
#include "EMoviePipelineMP4EncodeProfile.h"
#include "EMoviePipelineMP4EncodeRateControlMode.h"
#include "MoviePipelineMP4EncoderOutput.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINEMP4ENCODER_API UMoviePipelineMP4EncoderOutput : public UMoviePipelineVideoOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoviePipelineMP4EncodeRateControlMode EncodingRateControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AverageBitrateInMbps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBitrateInMbps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstantRateFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoviePipelineMP4EncodeProfile EncodingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoviePipelineMP4EncodeLevel EncodingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAudio;
    
    UMoviePipelineMP4EncoderOutput();

};

