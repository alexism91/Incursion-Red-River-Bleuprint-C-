#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EWwiseAssetDestroyOptions.h"
#include "EWwiseAudioNodeLoading.h"
#include "WwiseDialogueEventInfo.h"
#include "WwiseDynamicEventInfoLibrary.generated.h"

UCLASS(Blueprintable)
class WWISERESOURCELOADER_API UWwiseDynamicEventInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseDynamicEventInfoLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseDialogueEventInfo SetWwiseShortId(const FWwiseDialogueEventInfo& Ref, int32 WwiseShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseDialogueEventInfo SetWwiseName(const FWwiseDialogueEventInfo& Ref, const FString& WwiseName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseDialogueEventInfo SetWwiseGuid(const FWwiseDialogueEventInfo& Ref, const FGuid& WwiseGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseDialogueEventInfo SetSwitchContainerLoading(const FWwiseDialogueEventInfo& Ref, const EWwiseAudioNodeLoading& AudioNodeLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseDialogueEventInfo SetHardCodedSoundBankShortId(const FWwiseDialogueEventInfo& Ref, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseDialogueEventInfo SetDestroyOptions(const FWwiseDialogueEventInfo& Ref, const EWwiseAssetDestroyOptions& DestroyOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseDialogueEventInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, EWwiseAudioNodeLoading AudioNodeLoading, EWwiseAssetDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWwiseShortId(const FWwiseDialogueEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWwiseName(const FWwiseDialogueEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetWwiseGuid(const FWwiseDialogueEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHardCodedSoundBankShortId(const FWwiseDialogueEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWwiseAssetDestroyOptions GetDestroyOptions(const FWwiseDialogueEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWwiseAudioNodeLoading GetAudioNodeLoading(const FWwiseDialogueEventInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakStruct(FWwiseDialogueEventInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, EWwiseAudioNodeLoading& AudioNodeLoading, EWwiseAssetDestroyOptions& OutDestroyOptions, int32& OutHardCodedSoundBankShortId);
    
};

