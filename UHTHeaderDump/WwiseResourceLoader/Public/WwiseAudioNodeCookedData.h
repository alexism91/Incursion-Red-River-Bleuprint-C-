#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseFileHandler -ObjectName=WwiseExternalSourceCookedData -FallbackName=WwiseExternalSourceCookedData
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseFileHandler -ObjectName=WwiseMediaCookedData -FallbackName=WwiseMediaCookedData
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseFileHandler -ObjectName=WwiseSoundBankCookedData -FallbackName=WwiseSoundBankCookedData
#include "EWwiseAssetDestroyOptions.h"
#include "EWwiseAudioNodeLoading.h"
#include "WwiseAudioNodeCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseAudioNodeCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioNodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseSoundBankCookedData> SoundBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseMediaCookedData> Media;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWwiseExternalSourceCookedData> ExternalSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseAudioNodeLoading AudioNodeLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseAssetDestroyOptions DestroyOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    FWwiseAudioNodeCookedData();
};

