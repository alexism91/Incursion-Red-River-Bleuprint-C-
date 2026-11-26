#pragma once
#include "CoreMinimal.h"
#include "GameplayCameraActorBase.h"
#include "GameplayCameraRigActor.generated.h"

class UGameplayCameraRigComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AGameplayCameraRigActor : public AGameplayCameraActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayCameraRigComponent* CameraRigComponent;
    
public:
    AGameplayCameraRigActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayCameraRigComponent* GetCameraRigComponent() const;
    
};

