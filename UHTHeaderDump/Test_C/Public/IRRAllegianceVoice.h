#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRConfig -ObjectName=IRRConfigDocumentBase -FallbackName=IRRConfigDocumentBase
#include "IRRAllegianceVoice.generated.h"

class UIRRRadioDataAsset;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAllegianceVoice : public FIRRConfigDocumentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UIRRRadioDataAsset>> VoicePacks;
    
    FIRRAllegianceVoice();
};

