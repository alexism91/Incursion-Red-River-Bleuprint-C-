#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ELightState.h"
#include "EMemoryCheckClass.h"
#include "OnMemorizedLightComponentStateChangedDelegate.h"
#include "OnMemorizedLightStateChangedDelegate.h"
#include "LXRMemoryComponent.generated.h"

class ULXRSourceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LXR_API ULXRMemoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintDebug;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMemorizedLightStateChanged OnMemorizedLightStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMemorizedLightComponentStateChanged OnMemorizedLightComponentStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMemoryCheckClass MemoryCheckClass;
    
    ULXRMemoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ELightState GetStateOfMemorizedLight(ULXRSourceComponent* SourceComponent);
    
};

