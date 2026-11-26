#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowPhysicsSolverInterface -FallbackName=DataflowPhysicsSolverInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowSimulationAsset -FallbackName=DataflowSimulationAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkinnedMeshComponent -FallbackName=SkinnedMeshComponent
#include "ChaosClothSimulationProperties.h"
#include "ChaosClothComponent.generated.h"

class UChaosClothAsset;
class UChaosClothAssetBase;
class UChaosClothAssetInteractor;
class UPhysicsAsset;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChaosClothComponent : public USkinnedMeshComponent, public IDataflowPhysicsSolverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSimulationAsset SimulationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothGeometryScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAttachedParentAsPoseComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWaitForParallelTask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bEnableSimulation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bSuspendSimulation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBindToLeaderComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bTeleport: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bReset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideWithEnvironment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FChaosClothSimulationProperties> ClothSimulationProperties;
    
public:
    UChaosClothComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuspendSimulation();
    
    UFUNCTION(BlueprintCallable)
    void SetTeleportRotationThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable)
    void SetTeleportDistanceThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulateInEditor(const bool bNewSimulateState);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSimulation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCollideWithEnvironment(bool bCollide);
    
    UFUNCTION(BlueprintCallable)
    void SetClothAsset(UChaosClothAsset* InClothAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetAsset(UChaosClothAssetBase* InAsset);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetTeleportMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetConfigProperties();
    
    UFUNCTION(BlueprintCallable)
    void ResetCollisionSources();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCollisionSources(const USkinnedMeshComponent* SourceComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCollisionSource(const USkinnedMeshComponent* SourceComponent, const UPhysicsAsset* SourcePhysicsAsset);
    
    UFUNCTION(BlueprintCallable)
    void RecreateClothSimulationProxy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulationSuspended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportRotationThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportDistanceThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCollideWithEnvironment() const;
    
    UFUNCTION(BlueprintCallable)
    UChaosClothAssetInteractor* GetClothOutfitInteractor(int32 ModelIndex, const FName ClothSimulationModelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChaosClothAsset* GetClothAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChaosClothAssetBase* GetAsset() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNextUpdateTeleportAndReset();
    
    UFUNCTION(BlueprintCallable)
    void ForceNextUpdateTeleport();
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionSource(USkinnedMeshComponent* SourceComponent, const UPhysicsAsset* SourcePhysicsAsset, bool bUseSphylsOnly);
    

    // Fix for true pure virtual functions not being implemented
};

