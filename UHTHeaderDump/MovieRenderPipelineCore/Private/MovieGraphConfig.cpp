#include "MovieGraphConfig.h"
#include "MovieGraphInputNode.h"
#include "MovieGraphOutputNode.h"
#include "Templates/SubclassOf.h"

UMovieGraphConfig::UMovieGraphConfig() {
    this->InputNode = CreateDefaultSubobject<UMovieGraphInputNode>(TEXT("DefaultInputNode"));
    this->OutputNode = CreateDefaultSubobject<UMovieGraphOutputNode>(TEXT("DefaultOutputNode"));
}

void UMovieGraphConfig::UpdateGlobalVariableValues(const UMovieGraphPipeline* InPipeline) {
}

bool UMovieGraphConfig::RemoveOutboundEdges(UMovieGraphNode* InNode, const FName& InPinName) {
    return false;
}

bool UMovieGraphConfig::RemoveNodes(TArray<UMovieGraphNode*> InNodes) {
    return false;
}

bool UMovieGraphConfig::RemoveNode(UMovieGraphNode* InNode) {
    return false;
}

bool UMovieGraphConfig::RemoveLabeledEdge(UMovieGraphNode* FromNode, const FName& FromPinName, UMovieGraphNode* ToNode, const FName& ToPinName) {
    return false;
}

bool UMovieGraphConfig::RemoveInboundEdges(UMovieGraphNode* InNode, const FName& InPinName) {
    return false;
}

bool UMovieGraphConfig::RemoveAllOutboundEdges(UMovieGraphNode* InNode) {
    return false;
}

bool UMovieGraphConfig::RemoveAllInboundEdges(UMovieGraphNode* InNode) {
    return false;
}

void UMovieGraphConfig::MoveVariableToIndex(UMovieGraphVariable* InTargetVariable, int32 newIndex) {
}

void UMovieGraphConfig::MoveVariableBefore(UMovieGraphVariable* InTargetVariable, UMovieGraphVariable* InBeforeVariable) {
}

void UMovieGraphConfig::MoveCategoryBefore(const FString& InCategoryToMove, const FString& InCategoryBefore) {
}

TArray<UMovieGraphVariable*> UMovieGraphConfig::GetVariables(const bool bIncludeGlobal) const {
    return TArray<UMovieGraphVariable*>();
}

UMovieGraphVariable* UMovieGraphConfig::GetVariableByName(const FString& InVariableName) const {
    return NULL;
}

UMovieGraphVariable* UMovieGraphConfig::GetVariableByGuid(const FGuid& InGuid) const {
    return NULL;
}

TArray<FString> UMovieGraphConfig::GetUpstreamBranchNames(UMovieGraphNode* FromNode, const UMovieGraphPin* FromPin, const bool bStopAtSubgraph) const {
    return TArray<FString>();
}

TArray<UMovieGraphOutput*> UMovieGraphConfig::GetOutputs() const {
    return TArray<UMovieGraphOutput*>();
}

UMovieGraphNode* UMovieGraphConfig::GetOutputNode() const {
    return NULL;
}

void UMovieGraphConfig::GetOutputDirectory(FString& OutOutputDirectory) const {
}

TArray<UMovieGraphNode*> UMovieGraphConfig::GetNodesForTag(const FString& ScriptTag, UClass* OptionalClassFilter, const FName OptionalBranchFilter, bool bExactMatch) const {
    return TArray<UMovieGraphNode*>();
}

TArray<UMovieGraphNode*> UMovieGraphConfig::GetNodesForBranch(UClass* InClass, const FName& InBranchName, bool bExactMatch) const {
    return TArray<UMovieGraphNode*>();
}

UMovieGraphNode* UMovieGraphConfig::GetNodeForTag(const FString& ScriptTag, UClass* OptionalClassFilter, const FName OptionalBranchFilter, bool bExactMatch) const {
    return NULL;
}

UMovieGraphNode* UMovieGraphConfig::GetNodeForBranch(UClass* InClass, const FName& InBranchName, bool bExactMatch) const {
    return NULL;
}

TArray<UMovieGraphInput*> UMovieGraphConfig::GetInputs() const {
    return TArray<UMovieGraphInput*>();
}

UMovieGraphNode* UMovieGraphConfig::GetInputNode() const {
    return NULL;
}

TArray<FString> UMovieGraphConfig::GetDownstreamBranchNames(UMovieGraphNode* FromNode, const UMovieGraphPin* FromPin, const bool bStopAtSubgraph) const {
    return TArray<FString>();
}

TArray<FName> UMovieGraphConfig::GetBranchNames() const {
    return TArray<FName>();
}

void UMovieGraphConfig::GetAllContainedSubgraphs(TSet<UMovieGraphConfig*>& OutSubgraphs) const {
}

UMovieGraphVariable* UMovieGraphConfig::DuplicateVariable(UMovieGraphVariable* InVariableToDuplicate) {
    return NULL;
}

bool UMovieGraphConfig::DeleteMember(UMovieGraphMember* MemberToDelete) {
    return false;
}

UMovieGraphNode* UMovieGraphConfig::CreateNodeByClass(const TSubclassOf<UMovieGraphNode> InClass) {
    return NULL;
}

UMovieGraphEvaluatedConfig* UMovieGraphConfig::CreateFlattenedGraph(const FMovieGraphTraversalContext& InContext, FString& OutError) {
    return NULL;
}

UMovieGraphVariable* UMovieGraphConfig::AddVariable(const FName InCustomBaseName) {
    return NULL;
}

UMovieGraphOutput* UMovieGraphConfig::AddOutput(const FText& InBaseName) {
    return NULL;
}

bool UMovieGraphConfig::AddLabeledEdge(UMovieGraphNode* FromNode, const FName& FromPinLabel, UMovieGraphNode* ToNode, const FName& ToPinLabel) {
    return false;
}

UMovieGraphInput* UMovieGraphConfig::AddInput(const FText& InBaseName) {
    return NULL;
}


