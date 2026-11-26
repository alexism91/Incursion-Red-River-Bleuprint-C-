#include "PCGGraph.h"
#include "PCGNode.h"
#include "Templates/SubclassOf.h"

UPCGGraph::UPCGGraph() {
    this->bLandscapeUsesMetadata = true;
    this->InputNode = CreateDefaultSubobject<UPCGNode>(TEXT("DefaultInputNode"));
    this->OutputNode = CreateDefaultSubobject<UPCGNode>(TEXT("DefaultOutputNode"));
    this->bUseHierarchicalGeneration = false;
    this->HiGenGridSize = EPCGHiGenGrid::Grid256;
    this->HiGenExponential = 0;
    this->bUse2DGrid = true;
    this->bIsEditorOnly = false;
    this->CookedCompilationData = NULL;
}

void UPCGGraph::RemoveNodes(TArray<UPCGNode*>& InNodes) {
}

void UPCGGraph::RemoveNode(UPCGNode* InNode) {
}

bool UPCGGraph::RemoveEdge(UPCGNode* From, const FName& FromLabel, UPCGNode* To, const FName& ToLabel) {
    return false;
}

UPCGNode* UPCGGraph::GetOutputNode() const {
    return NULL;
}

UPCGNode* UPCGGraph::GetInputNode() const {
    return NULL;
}

UPCGNode* UPCGGraph::AddNodeOfType(TSubclassOf<UPCGSettings> InSettingsClass, UPCGSettings*& DefaultNodeSettings) {
    return NULL;
}

UPCGNode* UPCGGraph::AddNodeInstance(UPCGSettings* InSettings) {
    return NULL;
}

UPCGNode* UPCGGraph::AddNodeCopy(const UPCGSettings* InSettings, UPCGSettings*& DefaultNodeSettings) {
    return NULL;
}

UPCGNode* UPCGGraph::AddEdge(UPCGNode* From, const FName& FromPinLabel, UPCGNode* To, const FName& ToPinLabel) {
    return NULL;
}


