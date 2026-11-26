#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_PreviewMeshProvider -FallbackName=Interface_PreviewMeshProvider
#include "IKRigSkeleton.h"
#include "RetargetDefinition.h"
#include "IKRigDefinition.generated.h"

class UIKRigEffectorGoal;
class UIKRigSolver;
class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI)
class UIKRigDefinition : public UObject, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigSkeleton Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIKRigEffectorGoal*> Goals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> SolverStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetargetDefinition RetargetDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIKRigSolver*> Solvers;
    
public:
    UIKRigDefinition();


    // Fix for true pure virtual functions not being implemented
};

