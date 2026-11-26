#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRRadioMessage.h"
#include "IRRRadioManager.generated.h"

class UIRRRadioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRRADIOSYSTEM_API UIRRRadioManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BroadcastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalRadioGateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRRadioComponent*> RadioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobalRadioGateOpen;
    
    UIRRRadioManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterRadioComponent(UIRRRadioComponent* Radio);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRadioComponent(UIRRRadioComponent* Radio);
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownTimer();
    
    UFUNCTION(BlueprintCallable)
    bool IsGlobalRadioGateOpen();
    
    UFUNCTION(BlueprintCallable)
    TArray<UIRRRadioComponent*> GetRadioComponents();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastRadioMessage_MC(FIRRRadioMessage Message, UIRRRadioComponent* Broadcaster);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BroadcastRadioMessage(FIRRRadioMessage Message, UIRRRadioComponent* Broadcaster);
    
};

