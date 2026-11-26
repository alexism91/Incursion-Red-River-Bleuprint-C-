#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundAttenuationSettings -FallbackName=SoundAttenuationSettings
#include "OdinSynthComponent.generated.h"

class UAudioComponent;
class UOdinDecoder;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ODIN_API UOdinSynthComponent : public USynthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinDecoder* decoder;
    
public:
    UOdinSynthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDecoder(UOdinDecoder* InDecoder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOdinDecoder* GetDecoder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetConnectedAudioComponent();
    
    UFUNCTION(BlueprintCallable)
    void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);
    
};

