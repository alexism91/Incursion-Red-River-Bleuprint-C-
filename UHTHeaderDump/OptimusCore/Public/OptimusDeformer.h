#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_PreviewMeshProvider -FallbackName=Interface_PreviewMeshProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformer -FallbackName=MeshDeformer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshHalfEdgeBufferAccessor -FallbackName=SkeletalMeshHalfEdgeBufferAccessor
#include "EOptimusDeformerStatus.h"
#include "OptimusComputeGraphInfo.h"
#include "OptimusDataInterfacePropertyOverrideInfo.h"
#include "OptimusNodeFunctionLibraryOwner.h"
#include "OptimusNodeGraphCollectionOwner.h"
#include "OptimusPathResolver.h"
#include "OptimusValueDescription.h"
#include "OptimusValueIdentifier.h"
#include "OptimusDeformer.generated.h"

class UComputeDataInterface;
class UOptimusActionStack;
class UOptimusComponentSourceBinding;
class UOptimusComponentSourceBindingContainer;
class UOptimusNodeGraph;
class UOptimusResourceContainer;
class UOptimusResourceDescription;
class UOptimusVariableContainer;
class UOptimusVariableDescription;
class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI)
class UOptimusDeformer : public UMeshDeformer, public IInterface_PreviewMeshProvider, public IOptimusPathResolver, public IOptimusNodeGraphCollectionOwner, public IOptimusNodeFunctionLibraryOwner, public ISkeletalMeshHalfEdgeBufferAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusComputeGraphInfo> ComputeGraphs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UComputeDataInterface>, FOptimusDataInterfacePropertyOverrideInfo> DataInterfacePropertyOverrideMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FOptimusValueIdentifier, FOptimusValueDescription> ValueMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOptimusActionStack* ActionStack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusDeformerStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptimusNodeGraph*> Graphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusComponentSourceBindingContainer* Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusVariableContainer* Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusResourceContainer* Resources;
    
public:
    UOptimusDeformer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusVariableDescription*> GetVariables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusResourceDescription*> GetResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOptimusComponentSourceBinding* GetPrimaryComponentBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusComponentSourceBinding*> GetComponentBindings() const;
    

    // Fix for true pure virtual functions not being implemented
};

