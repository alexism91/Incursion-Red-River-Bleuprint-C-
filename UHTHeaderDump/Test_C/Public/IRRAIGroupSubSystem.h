#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRAIGroupDevSettings.h"
#include "IRRGroupDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IRRAIGroupSubSystem.generated.h"

class AIRRAIGroupController;
class AIRRAIGroupPawn;

UCLASS(Blueprintable)
class TEST_C_API UIRRAIGroupSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRAIGroupPawn*> Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIRRAIGroupPawn> GroupPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIRRAIGroupController> GroupControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIGroupDevSettings DevSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupDelegate OnGroupAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupDelegate OnGroupRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_GroupTick;
    
public:
    UIRRAIGroupSubSystem();

    UFUNCTION(BlueprintCallable)
    void TickGroups();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGroupEmpty(AIRRAIGroupController* Group);
    
};

