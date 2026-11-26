#pragma once
#include "CoreMinimal.h"
#include "EWwiseAssetDestroyOptions.h"
#include "EWwiseAudioNodeLoading.h"
#include "WwiseObjectInfo.h"
#include "WwiseDialogueEventInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseDialogueEventInfo : public FWwiseObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseAudioNodeLoading AudioNodeLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseAssetDestroyOptions DestroyOptions;
    
    FWwiseDialogueEventInfo();
};

