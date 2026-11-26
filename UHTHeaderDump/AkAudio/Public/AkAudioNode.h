#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseAudioNodeCookedData -FallbackName=WwiseAudioNodeCookedData
#include "AkAudioType.h"
#include "AkDynamicSequenceTransition.h"
#include "AkAudioNode.generated.h"

class UAkDynamicSequence;
class UAkGameObject;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioNode : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWwiseAudioNodeCookedData AudioNodeCookedData;
    
    UAkAudioNode();

    UFUNCTION(BlueprintCallable)
    UAkDynamicSequence* PostAudioNode(UAkGameObject* GameObject, bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition);
    
    UFUNCTION(BlueprintCallable)
    UAkDynamicSequence* PostAmbientAudioNode(bool bNewInstance, bool bPlayImmediately, const FAkDynamicSequenceTransition Transition);
    
};

