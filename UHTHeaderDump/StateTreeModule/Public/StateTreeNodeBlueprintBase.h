#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EStateTreeNodeFormatting.h"
#include "EStateTreeTransitionPriority.h"
#include "StateTreeBlueprintPropertyRef.h"
#include "StateTreeEvent.h"
#include "StateTreeStateLink.h"
#include "StateTreeNodeBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UStateTreeNodeBlueprintBase : public UObject {
    GENERATED_BODY()
public:
    UStateTreeNodeBlueprintBase();

    UFUNCTION(BlueprintCallable)
    void SendEvent(const FStateTreeEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransition(const FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText ReceiveGetDescription(EStateTreeNodeFormatting Formatting) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPropertyRefValid(const FStateTreeBlueprintPropertyRef& PropertyRef) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPropertyReference(const FStateTreeBlueprintPropertyRef& PropertyRef) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPropertyDescriptionByPropertyName(FName PropertyName) const;
    
};

