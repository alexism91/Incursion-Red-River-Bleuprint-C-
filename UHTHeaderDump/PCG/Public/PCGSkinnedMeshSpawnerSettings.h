#pragma once
#include "CoreMinimal.h"
#include "PCGObjectPropertyOverrideDescription.h"
#include "PCGSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGSkinnedMeshSpawnerSettings.generated.h"

class AActor;
class UPCGSkinnedMeshInstanceDataPackerBase;
class UPCGSkinnedMeshSelector;

UCLASS(Blueprintable, MinimalAPI)
class UPCGSkinnedMeshSpawnerSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGSkinnedMeshSelector* MeshSelectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGSkinnedMeshInstanceDataPackerBase> InstanceDataPackerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGSkinnedMeshInstanceDataPackerBase* InstanceDataPackerParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGObjectPropertyOverrideDescription> SkinnedMeshComponentPropertyOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyMeshBoundsToPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PostProcessFunctionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSilenceOverrideAttributeNotFoundErrors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnOnIdenticalSpawn;
    
    UPCGSkinnedMeshSpawnerSettings();

    UFUNCTION(BlueprintCallable)
    void SetInstancePackerType(TSubclassOf<UPCGSkinnedMeshInstanceDataPackerBase> InInstancePackerType);
    
};

