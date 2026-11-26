#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseLocalizedDialogueEventCookedData -FallbackName=WwiseLocalizedDialogueEventCookedData
#include "AkAudioType.h"
#include "AkDynamicSequenceTransition.h"
#include "AkDialogueEvent.generated.h"

class UAkAudioNode;
class UAkDynamicSequence;
class UAkGameObject;
class UAkGroupValue;

UCLASS(Blueprintable)
class AKAUDIO_API UAkDialogueEvent : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseLocalizedDialogueEventCookedData DialogueEventCookedData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UAkAudioNode*> LoadedAudioNodes;
    
public:
    UAkDialogueEvent();

    UFUNCTION(BlueprintCallable)
    UAkAudioNode* ResolveOrderedArguments(TArray<UAkGroupValue*> Arguments);
    
    UFUNCTION(BlueprintCallable)
    UAkAudioNode* ResolveArguments(TArray<UAkGroupValue*> Arguments);
    
    UFUNCTION(BlueprintCallable)
    UAkDynamicSequence* PostDialogueEvent(UAkGameObject* GameObject, const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition);
    
    UFUNCTION(BlueprintCallable)
    UAkDynamicSequence* PostAmbientDialogueEvent(const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition);
    
    UFUNCTION(BlueprintCallable)
    UAkAudioNode* FetchAudioNodeObject(int32 AudioNodeId);
    
};

