#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphTraversalContext.h"
#include "Templates/SubclassOf.h"
#include "MovieGraphConfig.generated.h"

class UMovieGraphConfig;
class UMovieGraphEvaluatedConfig;
class UMovieGraphGlobalVariable;
class UMovieGraphInput;
class UMovieGraphMember;
class UMovieGraphNode;
class UMovieGraphOutput;
class UMovieGraphPin;
class UMovieGraphPipeline;
class UMovieGraphVariable;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphNode*> AllNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphNode* InputNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphNode* OutputNode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphVariable*> Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphGlobalVariable*> GlobalVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphInput*> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphOutput*> Outputs;
    
public:
    UMovieGraphConfig();

    UFUNCTION(BlueprintCallable)
    void UpdateGlobalVariableValues(const UMovieGraphPipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOutboundEdges(UMovieGraphNode* InNode, const FName& InPinName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNodes(TArray<UMovieGraphNode*> InNodes);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNode(UMovieGraphNode* InNode);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveLabeledEdge(UMovieGraphNode* FromNode, const FName& FromPinName, UMovieGraphNode* ToNode, const FName& ToPinName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInboundEdges(UMovieGraphNode* InNode, const FName& InPinName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllOutboundEdges(UMovieGraphNode* InNode);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllInboundEdges(UMovieGraphNode* InNode);
    
    UFUNCTION(BlueprintCallable)
    void MoveVariableToIndex(UMovieGraphVariable* InTargetVariable, int32 newIndex);
    
    UFUNCTION(BlueprintCallable)
    void MoveVariableBefore(UMovieGraphVariable* InTargetVariable, UMovieGraphVariable* InBeforeVariable);
    
    UFUNCTION(BlueprintCallable)
    void MoveCategoryBefore(const FString& InCategoryToMove, const FString& InCategoryBefore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphVariable*> GetVariables(const bool bIncludeGlobal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphVariable* GetVariableByName(const FString& InVariableName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphVariable* GetVariableByGuid(const FGuid& InGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetUpstreamBranchNames(UMovieGraphNode* FromNode, const UMovieGraphPin* FromPin, const bool bStopAtSubgraph) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphOutput*> GetOutputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphNode* GetOutputNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutputDirectory(FString& OutOutputDirectory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphNode*> GetNodesForTag(const FString& ScriptTag, UClass* OptionalClassFilter, const FName OptionalBranchFilter, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphNode*> GetNodesForBranch(UClass* InClass, const FName& InBranchName, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphNode* GetNodeForTag(const FString& ScriptTag, UClass* OptionalClassFilter, const FName OptionalBranchFilter, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphNode* GetNodeForBranch(UClass* InClass, const FName& InBranchName, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphInput*> GetInputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphNode* GetInputNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetDownstreamBranchNames(UMovieGraphNode* FromNode, const UMovieGraphPin* FromPin, const bool bStopAtSubgraph) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetBranchNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllContainedSubgraphs(TSet<UMovieGraphConfig*>& OutSubgraphs) const;
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphVariable* DuplicateVariable(UMovieGraphVariable* InVariableToDuplicate);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteMember(UMovieGraphMember* MemberToDelete);
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphNode* CreateNodeByClass(const TSubclassOf<UMovieGraphNode> InClass);
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphEvaluatedConfig* CreateFlattenedGraph(const FMovieGraphTraversalContext& InContext, FString& OutError);
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphVariable* AddVariable(const FName InCustomBaseName);
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphOutput* AddOutput(const FText& InBaseName);
    
    UFUNCTION(BlueprintCallable)
    bool AddLabeledEdge(UMovieGraphNode* FromNode, const FName& FromPinLabel, UMovieGraphNode* ToNode, const FName& ToPinLabel);
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphInput* AddInput(const FText& InBaseName);
    
};

