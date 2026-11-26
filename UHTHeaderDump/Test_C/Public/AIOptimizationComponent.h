#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=AIOptimizationData -FallbackName=AIOptimizationData
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=EAIOptimizationLevel -FallbackName=EAIOptimizationLevel
#include "OnOptimizationLevelChangedDelegate.h"
#include "AIOptimizationComponent.generated.h"

class UEquippableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UAIOptimizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMontagePlayOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontagePlayTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LinkedAnimGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIOptimizationLevel MinOptimizationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIOptimizationLevel MaxOptimizationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnOptimizationWave, meta=(AllowPrivateAccess=true))
    EAIOptimizationLevel OptimizationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMovementTickRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOptimizationLevelChanged OnOptimizationLevelChanged;
    
    UAIOptimizationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateOptimization();
    
    UFUNCTION(BlueprintCallable)
    void TickIsMontagePlaying();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOptimizationLevel(EAIOptimizationLevel NewOptimizationLevel, float BotTicksPerSec);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMinOptimizationLevel(EAIOptimizationLevel InOptimizationLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxOptimizationLevel(EAIOptimizationLevel InOptimizationLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnOptimizationWave();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageStarted(FName LinkedAnimGraph);
    
    UFUNCTION(BlueprintCallable)
    void OnEquippableChanged(UEquippableComponent* EquippableComponent);
    
    UFUNCTION(BlueprintCallable)
    EAIOptimizationLevel GetOptimizationLevel();
    
    UFUNCTION(BlueprintCallable)
    FAIOptimizationData GetOptimizationData(EAIOptimizationLevel InOptimizationLevel);
    
    UFUNCTION(BlueprintCallable)
    void EnableOptimization();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebug();
    
    UFUNCTION(BlueprintCallable)
    void DoOptimization(FAIOptimizationData OptimizationData);
    
    UFUNCTION(BlueprintCallable)
    void DisableOptimization();
    
};

