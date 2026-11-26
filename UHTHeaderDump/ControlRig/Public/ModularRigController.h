#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMMirrorSettings -FallbackName=RigVMMirrorSettings
#include "RigElementKey.h"
#include "RigModuleReference.h"
#include "Templates/SubclassOf.h"
#include "ModularRigController.generated.h"

class UControlRig;

UCLASS(Blueprintable, MinimalAPI)
class UModularRigController : public UObject {
    GENERATED_BODY()
public:
    UModularRigController();

    UFUNCTION(BlueprintCallable)
    bool UnBindModuleVariable(const FName& InModuleName, const FName& InVariableName, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SwapModulesOfClass(TSubclassOf<UControlRig> InOldClass, TSubclassOf<UControlRig> InNewClass, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SwapModuleClass(const FName& InModuleName, TSubclassOf<UControlRig> InNewClass, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SetModuleSelection(const TArray<FName>& InModuleNames);
    
    UFUNCTION(BlueprintCallable)
    bool SetConfigValueInModule(const FName& InModuleName, const FName& InVariableName, const FString& InValue, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SelectModule(const FName& InModuleName, const bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    bool ResetConfigValueInModule(const FName& InModuleName, const FString& InPath, bool bClearOverride, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool ReparentModule(const FName& InModuleName, const FName& InNewParentModuleName, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    FName RenameModule(const FName& InModuleName, const FName& InNewName, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    FName MirrorModule(const FName& InModuleName, const FRigVMMirrorSettings& InSettings, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool ImportModuleSettingsFromString(const FString& InContent, TArray<FName> InOptionalModuleNames, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSelectedModules() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRigModuleReference GetModuleReference(FName InModuleName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRigElementKey> GetConnectorsForModule(FName InModuleName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllModules() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportModuleSettingsToString(TArray<FName> InModuleNames) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> DisconnectCyclicConnectors(bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool DisconnectConnector(const FRigElementKey& InConnectorKey, bool bDisconnectSubModules, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool DeselectModule(const FName& InModuleName);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteModule(const FName& InModuleName, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectConnectorToElements(const FRigElementKey& InConnectorKey, const TArray<FRigElementKey>& InTargetKeys, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectConnectorToElement(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection);
    
    UFUNCTION(BlueprintCallable)
    bool CanConnectConnectorToElements(const FRigElementKey& InConnectorKey, const TArray<FRigElementKey>& InTargetKeys, FText& OutErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    bool CanConnectConnectorToElement(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, FText& OutErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    bool BindModuleVariable(const FName& InModuleName, const FName& InVariableName, const FString& InSourcePath, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool AutoConnectSecondaryConnectors(const TArray<FRigElementKey>& InConnectorKeys, bool bReplaceExistingConnections, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool AutoConnectModules(const TArray<FName>& InModuleNames, bool bReplaceExistingConnections, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool AddTargetToArrayConnector(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection);
    
    UFUNCTION(BlueprintCallable)
    FName AddModule(const FName& InModuleName, TSubclassOf<UControlRig> InClass, const FName& InParentModuleName, bool bSetupUndo);
    
};

