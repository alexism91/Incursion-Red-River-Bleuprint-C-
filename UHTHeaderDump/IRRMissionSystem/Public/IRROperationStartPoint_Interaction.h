#pragma once
#include "CoreMinimal.h"
#include "IRROperationStartPoint.h"
#include "Templates/SubclassOf.h"
#include "IRROperationStartPoint_Interaction.generated.h"

class AActor;
class AIRROperationStartPoint_Interaction;

UCLASS(Blueprintable, NoExport)
class IRRMISSIONSYSTEM_API AIRROperationStartPoint_Interaction : public AIRROperationStartPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> HookClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InteractionHooks;
    
    AIRROperationStartPoint_Interaction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool NotifyInteracted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIRROperationStartPoint_Interaction* GetOwningStartPoint(AActor* HookActor);
    
};

