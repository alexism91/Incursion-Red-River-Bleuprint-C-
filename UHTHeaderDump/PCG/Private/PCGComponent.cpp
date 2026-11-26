#include "PCGComponent.h"
#include "PCGGraphInstance.h"
#include "PCGSchedulingPolicyDistanceAndDirection.h"

UPCGComponent::UPCGComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Seed = 42;
    this->bActivated = true;
    this->bIsComponentPartitioned = false;
    this->GenerationTrigger = EPCGComponentGenerationTrigger::GenerateOnLoad;
    this->bGenerateOnDropWhenTriggerOnDemand = false;
    this->bOverrideGenerationRadii = false;
    this->SchedulingPolicyClass = UPCGSchedulingPolicyDistanceAndDirection::StaticClass();
    this->SchedulingPolicy = NULL;
    this->bGenerated = false;
    this->bRuntimeGenerated = false;
    this->GraphInstance = CreateDefaultSubobject<UPCGGraphInstance>(TEXT("PCGGraphInstance"));
    this->GenerationGridSize = 2147483648;
    this->CurrentEditingMode = EPCGEditorDirtyMode::Normal;
    this->SerializedEditingMode = EPCGEditorDirtyMode::Normal;
    this->InputType = EPCGComponentInput::Actor;
    this->bParseActorComponents = true;
    this->RuntimeGridDescriptorHash = 0;
    this->CachedPCGData = NULL;
    this->CachedInputData = NULL;
    this->CachedActorData = NULL;
    this->CachedLandscapeData = NULL;
    this->CachedLandscapeHeightData = NULL;
    this->bIsComponentLocal = false;
    this->bProceduralInstancesInUse = false;
}

void UPCGComponent::SetGraph_Implementation(UPCGGraphInterface* InGraph) {
}

void UPCGComponent::SetEditingMode(EPCGEditorDirtyMode InEditingMode, EPCGEditorDirtyMode InSerializedEditingMode) {
}

void UPCGComponent::NotifyPropertiesChangedFromBlueprint() {
}

EPCGEditorDirtyMode UPCGComponent::GetSerializedEditingMode() const {
    return EPCGEditorDirtyMode::Normal;
}

FPCGDataCollection UPCGComponent::GetGeneratedGraphOutput() const {
    return FPCGDataCollection{};
}

EPCGEditorDirtyMode UPCGComponent::GetEditingMode() const {
    return EPCGEditorDirtyMode::Normal;
}

void UPCGComponent::GenerateLocal(bool bForce) {
}

void UPCGComponent::Generate_Implementation(bool bForce) {
}

AActor* UPCGComponent::ClearPCGLink(UClass* TemplateActor) {
    return NULL;
}

void UPCGComponent::CleanupLocal(bool bRemoveComponents) {
}

void UPCGComponent::Cleanup_Implementation(bool bRemoveComponents) {
}

void UPCGComponent::AddToManagedResources(UPCGManagedResource* InResource) {
}

void UPCGComponent::AddComponentsToManagedResources(const TArray<UActorComponent*>& InComponents) {
}

void UPCGComponent::AddActorsToManagedResources(const TArray<AActor*>& InActors) {
}


