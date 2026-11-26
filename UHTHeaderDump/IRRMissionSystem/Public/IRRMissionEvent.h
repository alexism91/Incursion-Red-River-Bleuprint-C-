#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "EIRRMissionNetworkExecType.h"
#include "IRRMissionEvent.generated.h"

class UObject;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EIRRMissionNetworkExecType NetworkExecType;
    
    UIRRMissionEvent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryExecute(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(UObject* Owner);
    
};

