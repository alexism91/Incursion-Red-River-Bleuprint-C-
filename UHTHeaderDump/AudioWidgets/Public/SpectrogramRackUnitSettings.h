#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioSynesthesia -ObjectName=EConstantQFFTSizeEnum -FallbackName=EConstantQFFTSizeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTSize -FallbackName=EFFTSize
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "EAudioColorGradient.h"
#include "EAudioSpectrogramFrequencyAxisPixelBucketMode.h"
#include "EAudioSpectrogramFrequencyAxisScale.h"
#include "EAudioSpectrumAnalyzerType.h"
#include "SpectrogramRackUnitSettings.generated.h"

USTRUCT(BlueprintType)
struct FSpectrogramRackUnitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumAnalyzerType AnalyzerType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFFTSize FFTAnalyzerFFTSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstantQFFTSizeEnum CQTAnalyzerFFTSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrogramFrequencyAxisPixelBucketMode PixelPlotMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrogramFrequencyAxisScale FrequencyScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioColorGradient ColorMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    AUDIOWIDGETS_API FSpectrogramRackUnitSettings();
};

