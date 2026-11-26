#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EIRRAITargetArrayType.h"
#include "IRREQSLibrary.generated.h"

class AIRRAIBaseController;
class UIRRAIBehaviorComponent;
class UIRRAITarget;
class UIRRAITargetTracker;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UIRREQSLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRREQSLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRAITargetTracker* GetTargetTrackerComponent(UObject* QueryOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRAITarget* GetCurrentTarget(UObject* QueryOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRAIBehaviorComponent* GetBehaviorComponent(UObject* QueryOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIRRAIBaseController* GetBaseController(UObject* QueryOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllTargetsByState(UObject* QueryOwner, TArray<UIRRAITarget*>& Targets, const EIRRAITargetArrayType TargetState);
    
};

