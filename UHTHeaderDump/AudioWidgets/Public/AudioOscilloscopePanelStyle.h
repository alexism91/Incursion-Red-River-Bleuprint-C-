#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "FixedSampleSequenceRulerStyle.h"
#include "SampledSequenceValueGridOverlayStyle.h"
#include "SampledSequenceViewerStyle.h"
#include "TriggerThresholdLineStyle.h"
#include "AudioOscilloscopePanelStyle.generated.h"

USTRUCT(BlueprintType)
struct FAudioOscilloscopePanelStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedSampleSequenceRulerStyle TimeRulerStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSampledSequenceValueGridOverlayStyle ValueGridStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSampledSequenceViewerStyle WaveViewerStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerThresholdLineStyle TriggerThresholdLineStyle;
    
    AUDIOWIDGETS_API FAudioOscilloscopePanelStyle();
};

