#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzerNRT -FallbackName=AudioAnalyzerNRT
#include "AudioSynesthesiaNRT.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT {
    GENERATED_BODY()
public:
    UAudioSynesthesiaNRT();

};

