#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "SampledSequenceValueGridOverlayStyle.h"
#include "SampledSequenceVectorViewerStyle.h"
#include "AudioVectorscopePanelStyle.generated.h"

USTRUCT(BlueprintType)
struct FAudioVectorscopePanelStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSampledSequenceValueGridOverlayStyle ValueGridStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSampledSequenceVectorViewerStyle VectorViewerStyle;
    
    AUDIOWIDGETS_API FAudioVectorscopePanelStyle();
};

