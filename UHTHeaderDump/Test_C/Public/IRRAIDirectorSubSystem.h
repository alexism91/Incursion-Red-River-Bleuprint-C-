#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRTickableWorldSubSystem -FallbackName=IRRTickableWorldSubSystem
#include "IRRAIDirectorConfig.h"
#include "IRRAIDirectorSubSystem.generated.h"

class AIRRAIBaseController;
class AIRRBaseCharacter;
class APawn;
class UIRRAIDirectorPlayerComponent;
class UIRRAITargetPathManager;
class UIRRBodyAwarenessManager;
class UIRRPerceptionSharingManager;

UCLASS(Blueprintable)
class TEST_C_API UIRRAIDirectorSubSystem : public UIRRTickableWorldSubSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<APawn*, UIRRAIDirectorPlayerComponent*> PlayerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRAIBaseController*> ActiveBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRBodyAwarenessManager* BodyAwarenessManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAITargetPathManager* TargetPathManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRPerceptionSharingManager* PerceptionSharingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIDirectorConfig DirectorConfig;
    
public:
    UIRRAIDirectorSubSystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBotRemoved(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnBotAdded(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRBodyAwarenessManager* GetBodyAwarenessManager() const;
    
    UFUNCTION(BlueprintCallable)
    void ForgetPawn(APawn* Pawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckForgetTargets();
    
};

