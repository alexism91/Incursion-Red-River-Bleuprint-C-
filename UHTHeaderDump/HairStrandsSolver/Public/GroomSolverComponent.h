#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowPhysicsSolverInterface -FallbackName=DataflowPhysicsSolverInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowSimulationAsset -FallbackName=DataflowSimulationAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "GroomSolverSettings.h"
#include "GroomSolverComponent.generated.h"

class UGroomComponent;
class UMeshDeformer;
class UMeshDeformerInstance;
class UMeshDeformerInstanceSettings;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGroomSolverComponent : public UMeshComponent, public IDataflowPhysicsSolverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomSolverSettings SolverSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSimulationAsset SimulationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UGroomComponent*> GroomComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshDeformer* MeshDeformer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMeshDeformerInstance* DeformerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshDeformerInstanceSettings* DeformerSettings;
    
public:
    UGroomSolverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDeformerSolver(UMeshDeformer* DeformerSolver);
    
    UFUNCTION(BlueprintCallable)
    void ResetGroomComponents();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGroomComponent(UGroomComponent* GroomComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddGroomComponent(UGroomComponent* GroomComponent);
    

    // Fix for true pure virtual functions not being implemented
};

