#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseFileHandler -ObjectName=WwiseLanguageCookedData -FallbackName=WwiseLanguageCookedData
#include "WwiseDialogueArgumentItem.h"
#include "WwiseDialogueArgumentPosition.h"
#include "WwiseDialogueEventCookedData.h"
#include "WwiseLocalizedDialogueEventCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseLocalizedDialogueEventCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FWwiseLanguageCookedData, FWwiseDialogueEventCookedData> DialogueEventLanguageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DialogueEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FWwiseDialogueArgumentItem, FWwiseDialogueArgumentPosition> RequiredArguments;
    
    FWwiseLocalizedDialogueEventCookedData();
};

