#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=EAIOptimizationLevel -FallbackName=EAIOptimizationLevel
#include "AIOptimizationComponentV2.generated.h"

class AController;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UAIOptimizationComponentV2 : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EAIOptimizationLevel CurrentLevel;
    
    UAIOptimizationComponentV2(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
};

