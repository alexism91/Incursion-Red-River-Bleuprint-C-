#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowGraphInterface -FallbackName=DataflowGraphInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EdGraph -FallbackName=EdGraph
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformerProducer -FallbackName=MeshDeformerProducer
#include "EDataflowType.h"
#include "Dataflow.generated.h"

class UDataflowSubGraph;
class UMaterial;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UDataflow : public UEdGraph, public IMeshDeformerProducer, public IDataflowGraphInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Variables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataflowSubGraph*> DataflowSubGraphs;
    
public:
    UDataflow();


    // Fix for true pure virtual functions not being implemented
};

