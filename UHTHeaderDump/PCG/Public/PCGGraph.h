#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
#include "EPCGHiGenGrid.h"
#include "PCGGraphInterface.h"
#include "PCGRuntimeGenerationRadii.h"
#include "Templates/SubclassOf.h"
#include "PCGGraph.generated.h"

class UPCGGraphCompilationData;
class UPCGNode;
class UPCGSettings;

UCLASS(Blueprintable, MinimalAPI)
class UPCGGraph : public UPCGGraphInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandscapeUsesMetadata;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGNode*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGNode* InputNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGNode* OutputNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag UserParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHierarchicalGeneration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid HiGenGridSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HiGenExponential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse2DGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGGraphCompilationData* CookedCompilationData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGRuntimeGenerationRadii GenerationRadii;
    
    UPCGGraph();

    UFUNCTION(BlueprintCallable)
    void RemoveNodes(TArray<UPCGNode*>& InNodes);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNode(UPCGNode* InNode);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEdge(UPCGNode* From, const FName& FromLabel, UPCGNode* To, const FName& ToLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGNode* GetOutputNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGNode* GetInputNode() const;
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddNodeOfType(TSubclassOf<UPCGSettings> InSettingsClass, UPCGSettings*& DefaultNodeSettings);
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddNodeInstance(UPCGSettings* InSettings);
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddNodeCopy(const UPCGSettings* InSettings, UPCGSettings*& DefaultNodeSettings);
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddEdge(UPCGNode* From, const FName& FromPinLabel, UPCGNode* To, const FName& ToPinLabel);
    
};

