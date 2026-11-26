#pragma once
#include "CoreMinimal.h"
#include "PCGObjectPropertyOverrideDescription.h"
#include "PCGSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGStaticMeshSpawnerSettings.generated.h"

class AActor;
class UPCGInstanceDataPackerBase;
class UPCGMeshSelectorBase;

UCLASS(Blueprintable, MinimalAPI)
class UPCGStaticMeshSpawnerSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGMeshSelectorBase> MeshSelectorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGMeshSelectorBase* MeshSelectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDescriptorChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGInstanceDataPackerBase> InstanceDataPackerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGInstanceDataPackerBase* InstanceDataPackerParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGObjectPropertyOverrideDescription> StaticMeshComponentPropertyOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyMeshBoundsToPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PostProcessFunctionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMergeDifferentDataInSameInstancedComponents;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSilenceOverrideAttributeNotFoundErrors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnOnIdenticalSpawn;
    
    UPCGStaticMeshSpawnerSettings();

    UFUNCTION(BlueprintCallable)
    void SetMeshSelectorType(TSubclassOf<UPCGMeshSelectorBase> InMeshSelectorType);
    
    UFUNCTION(BlueprintCallable)
    void SetInstancePackerType(TSubclassOf<UPCGInstanceDataPackerBase> InInstancePackerType);
    
};

