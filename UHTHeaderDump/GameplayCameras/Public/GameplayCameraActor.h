#pragma once
#include "CoreMinimal.h"
#include "GameplayCameraActorBase.h"
#include "GameplayCameraActor.generated.h"

class UGameplayCameraComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AGameplayCameraActor : public AGameplayCameraActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayCameraComponent* CameraComponent;
    
public:
    AGameplayCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayCameraComponent* GetCameraComponent() const;
    
};

