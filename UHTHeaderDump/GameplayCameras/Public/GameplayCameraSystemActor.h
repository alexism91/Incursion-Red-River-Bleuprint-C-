#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameplayCameraSystemActor.generated.h"

class UGameplayCameraSystemComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AGameplayCameraSystemActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayCameraSystemComponent* CameraSystemComponent;
    
public:
    AGameplayCameraSystemActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayCameraSystemComponent* GetCameraSystemComponent() const;
    
};

