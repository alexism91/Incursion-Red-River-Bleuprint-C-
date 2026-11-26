#pragma once
#include "CoreMinimal.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAISenseEvent.h"
#include "IRRAIBossComponent.generated.h"

class AIRRAIBaseController;
class AIRRBaseCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIBossComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobalTargetListener;
    
    UIRRAIBossComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetSenseEventAdded(const FIRRAISenseEvent& NewEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnBotRemoved(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnBotAdded(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character);
    
};

