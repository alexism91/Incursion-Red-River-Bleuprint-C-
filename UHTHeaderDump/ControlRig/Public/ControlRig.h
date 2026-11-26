#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformerProducer -FallbackName=MeshDeformerProducer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NodeMappingProviderInterface -FallbackName=NodeMappingProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMExtendedExecuteContext -FallbackName=RigVMExtendedExecuteContext
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMHost -FallbackName=RigVMHost
#include "ERigExecutionType.h"
#include "RigControlElement.h"
#include "RigControlElementCustomization.h"
#include "RigElementKey.h"
#include "RigHierarchyProvider.h"
#include "RigHierarchySettings.h"
#include "RigInfluenceMapPerEvent.h"
#include "RigModuleSettings.h"
#include "Templates/SubclassOf.h"
#include "ControlRig.generated.h"

class AActor;
class UAnimationDataSourceRegistry;
class UControlRig;
class UControlRigOverrideAsset;
class UControlRigShapeLibrary;
class UDataAssetLink;
class UObject;
class URigHierarchy;
class UTransformableControlHandle;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UControlRig : public URigVMHost, public INodeMappingProviderInterface, public IRigHierarchyProvider, public IMeshDeformerProducer {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnControlSelectedBPControlRig, EnterPropertyName, UControlRig*, Rig, const FRigControlElement&, Control, bool, bSelected);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UControlRigOverrideAsset*> OverrideAssets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERigExecutionType ExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigHierarchySettings HierarchySettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRigElementKey, FRigControlElementCustomization> ControlCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigHierarchy* DynamicHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ShapeLibraryNameMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExtendedExecuteContext RigVMExtendedExecuteContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationDataSourceRegistry* DataSourceRegistry;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigInfluenceMapPerEvent Influences;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataAssetLink*> ExternalVariableDataAssetLinks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlSelectedBP OnControlSelected_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigModuleSettings RigModuleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString RigModulePrefix;
    
public:
    UControlRig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsBackwardsSolve() const;
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRig(UControlRig* InInteractionRig);
    
    UFUNCTION(BlueprintCallable)
    void SelectControl(const FName& InControlName, bool bSelect, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    void RequestConstruction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlSelected(const FName& InControlName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UControlRig> GetInteractionRigClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlRig* GetInteractionRig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHostingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URigHierarchy* GetHierarchy();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UControlRig*> FindControlRigs(UObject* Outer, TSubclassOf<UControlRig> OptionalClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> CurrentControlSelection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTransformableControlHandle* CreateTransformableControlHandle(const FName& ControlName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearControlSelection(bool bSetupUndo);
    

    // Fix for true pure virtual functions not being implemented
};

