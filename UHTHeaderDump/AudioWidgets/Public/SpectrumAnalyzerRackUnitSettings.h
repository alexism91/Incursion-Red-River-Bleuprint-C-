#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioSynesthesia -ObjectName=EConstantQFFTSizeEnum -FallbackName=EConstantQFFTSizeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTSize -FallbackName=EFFTSize
#include "EAudioSpectrumAnalyzerBallistics.h"
#include "EAudioSpectrumAnalyzerType.h"
#include "EAudioSpectrumPlotFrequencyAxisPixelBucketMode.h"
#include "EAudioSpectrumPlotFrequencyAxisScale.h"
#include "EAudioSpectrumPlotTilt.h"
#include "SpectrumAnalyzerRackUnitSettings.generated.h"

USTRUCT(BlueprintType)
struct FSpectrumAnalyzerRackUnitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumAnalyzerBallistics Ballistics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumAnalyzerType AnalyzerType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFFTSize FFTAnalyzerFFTSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstantQFFTSizeEnum CQTAnalyzerFFTSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumPlotTilt TiltSpectrum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumPlotFrequencyAxisPixelBucketMode PixelPlotMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumPlotFrequencyAxisScale FrequencyScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayFrequencyAxisLabels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplaySoundLevelAxisLabels;
    
    AUDIOWIDGETS_API FSpectrumAnalyzerRackUnitSettings();
};

