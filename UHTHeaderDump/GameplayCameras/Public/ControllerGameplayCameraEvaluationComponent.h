#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ControllerGameplayCameraEvaluationComponent.generated.h"

class IGameplayCameraSystemHost;
class UGameplayCameraSystemHost;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UControllerGameplayCameraEvaluationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGameplayCameraSystemHost> CameraSystemHost;
    
public:
    UControllerGameplayCameraEvaluationComponent(const FObjectInitializer& ObjectInitializer);

};

