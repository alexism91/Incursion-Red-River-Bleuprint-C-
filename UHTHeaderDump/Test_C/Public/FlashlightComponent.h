#pragma once
#include "CoreMinimal.h"
#include "IRRLightSettings.h"
#include "TacticalComponent.h"
#include "FlashlightComponent.generated.h"

class ULightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UFlashlightComponent : public UTacticalComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRLightSettings LightSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightComponent* LightSource;
    
public:
    UFlashlightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULightComponent* GetLightSource() const;
    
};

