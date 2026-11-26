#pragma once
#include "CoreMinimal.h"
#include "ESSInterfaceFlag.h"
#include "SenseStimulusBase.h"
#include "SenseStimulusComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SENSESYSTEM_API USenseStimulusComponent : public USenseStimulusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InterfaceOwnerBitFlags;
    
    USenseStimulusComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetInvisible_Server(bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void SetInterfaceFlag(ESSInterfaceFlag Flag, bool bValue);
    
};

