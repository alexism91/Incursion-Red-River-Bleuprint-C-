#pragma once
#include "CoreMinimal.h"
#include "IRRTargetData.h"
#include "IRRTargetData_OperationActor.generated.h"

class AActor;
class UIRRTargetData_OperationActor;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTargetData_OperationActor : public UIRRTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UIRRTargetData_OperationActor();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* ResolveActor() const;
    
    UFUNCTION(BlueprintCallable)
    static UIRRTargetData_OperationActor* MakeForActor(AActor* InActor);
    
};

