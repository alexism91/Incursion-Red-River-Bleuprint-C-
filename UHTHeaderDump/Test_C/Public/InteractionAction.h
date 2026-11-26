#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "InteractionAction.generated.h"

class AActor;
class UInteractionTarget;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UInteractionAction : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteOnServer;
    
    UInteractionAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interrupt(UInteractionTarget* OwnerComp, AActor* InteractingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetExecutionTime(UInteractionTarget* OwnerComp, AActor* InteractingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(UInteractionTarget* OwnerComp, AActor* InteractingActor, bool bDoubleTab);
    
};

