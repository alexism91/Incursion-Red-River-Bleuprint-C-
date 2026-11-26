#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AudioMaterialEnvelopeSettings.h"
#include "AudioMaterialEnvelopeStyle.h"
#include "AudioMaterialEnvelope.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialEnvelope : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialEnvelopeStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialEnvelopeSettings EnvelopeSettings;
    
    UAudioMaterialEnvelope();

};

