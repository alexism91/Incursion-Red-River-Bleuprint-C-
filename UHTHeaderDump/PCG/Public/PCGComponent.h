#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPCGComponentGenerationTrigger.h"
#include "EPCGComponentInput.h"
#include "EPCGEditorDirtyMode.h"
#include "OnPCGGraphCancelledExternalDelegate.h"
#include "OnPCGGraphCleanedExternalDelegate.h"
#include "OnPCGGraphGeneratedExternalDelegate.h"
#include "OnPCGGraphStartGeneratingExternalDelegate.h"
#include "PCGDataCollection.h"
#include "PCGGraphExecutionSource.h"
#include "PCGRuntimeGenerationRadii.h"
#include "Templates/SubclassOf.h"
#include "PCGComponent.generated.h"

class AActor;
class UPCGData;
class UPCGGraphInstance;
class UPCGGraphInterface;
class UPCGManagedResource;
class UPCGSchedulingPolicyBase;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPCGComponent : public UActorComponent, public IPCGGraphExecutionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsComponentPartitioned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGComponentGenerationTrigger GenerationTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOnDropWhenTriggerOnDemand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGenerationRadii;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGRuntimeGenerationRadii GenerationRadii;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGSchedulingPolicyBase> SchedulingPolicyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGSchedulingPolicyBase* SchedulingPolicy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPCGGraphStartGeneratingExternal OnPCGGraphStartGeneratingExternal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPCGGraphCancelledExternal OnPCGGraphCancelledExternal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPCGGraphGeneratedExternal OnPCGGraphGeneratedExternal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPCGGraphCleanedExternal OnPCGGraphCleanedExternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    bool bGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    bool bRuntimeGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PostGenerateFunctionNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGGraphInstance* GraphInstance;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 GenerationGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPCGEditorDirtyMode CurrentEditingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGEditorDirtyMode SerializedEditingMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGComponentInput InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParseActorComponents;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RuntimeGridDescriptorHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedPCGData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedLandscapeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedLandscapeHeightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGManagedResource*> GeneratedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LastGeneratedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataCollection GeneratedGraphOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FPCGDataCollection> PerPinGeneratedOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsComponentLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProceduralInstancesInUse;
    
public:
    UPCGComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetGraph(UPCGGraphInterface* InGraph);
    
    UFUNCTION(BlueprintCallable)
    void SetEditingMode(EPCGEditorDirtyMode InEditingMode, EPCGEditorDirtyMode InSerializedEditingMode);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPropertiesChangedFromBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPCGEditorDirtyMode GetSerializedEditingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPCGDataCollection GetGeneratedGraphOutput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPCGEditorDirtyMode GetEditingMode() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateLocal(bool bForce);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Generate(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    AActor* ClearPCGLink(UClass* TemplateActor);
    
    UFUNCTION(BlueprintCallable)
    void CleanupLocal(bool bRemoveComponents);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Cleanup(bool bRemoveComponents);
    
    UFUNCTION(BlueprintCallable)
    void AddToManagedResources(UPCGManagedResource* InResource);
    
    UFUNCTION(BlueprintCallable)
    void AddComponentsToManagedResources(const TArray<UActorComponent*>& InComponents);
    
    UFUNCTION(BlueprintCallable)
    void AddActorsToManagedResources(const TArray<AActor*>& InActors);
    

    // Fix for true pure virtual functions not being implemented
};

