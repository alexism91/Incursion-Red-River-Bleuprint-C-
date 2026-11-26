#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMMirrorSettings -FallbackName=RigVMMirrorSettings
#include "ERigBoneType.h"
#include "RigComponentKey.h"
#include "RigConnectorSettings.h"
#include "RigControlSettings.h"
#include "RigControlValue.h"
#include "RigElementKey.h"
#include "RigHierarchyKey.h"
#include "RigHierarchyController.generated.h"

class URigHierarchy;
class UScriptStruct;
class USkeletalMesh;
class USkeleton;

UCLASS(Blueprintable, MinimalAPI)
class URigHierarchyController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReportWarningsAndErrors;
    
    URigHierarchyController();

    UFUNCTION(BlueprintCallable)
    bool SetSelection(const TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool SetHierarchySelection(const TArray<FRigHierarchyKey>& InKeys, bool bPrintPythonCommand, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    void SetHierarchy(URigHierarchy* InHierarchy);
    
    UFUNCTION(BlueprintCallable)
    FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetComponentSelection(const TArray<FRigComponentKey>& InKeys, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool SetComponentContent(FRigComponentKey InComponent, const FString& InContent, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool SetAvailableSpaceLabel(FRigElementKey InControl, FRigElementKey InSpace, FName InDisplayLabel, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool SetAvailableSpaceIndex(FRigElementKey InControl, FRigElementKey InSpace, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool SelectHierarchyKey(FRigHierarchyKey InKey, bool bSelect, bool bClearSelection, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SelectComponent(FRigComponentKey InKey, bool bSelect, bool bClearSelection, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    FRigComponentKey ReparentComponent(FRigComponentKey InComponentKey, FRigElementKey InParentElementKey, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
    
    UFUNCTION(BlueprintCallable)
    bool ReorderElement(FRigElementKey InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
    
    UFUNCTION(BlueprintCallable)
    FRigComponentKey RenameComponent(FRigComponentKey InComponent, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveComponent(FRigComponentKey InComponent, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveChannelHost(FRigElementKey InChannel, FRigElementKey InHost, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAvailableSpace(FRigElementKey InControl, FRigElementKey InSpace, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportSocketsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh, const FName& InNamespace, bool bReplaceExistingSockets, bool bRemoveObsoleteSockets, bool bSelectSockets, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportPreviewSkeletalMesh(USkeletalMesh* InSkeletalMesh, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportFromText(const FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportCurvesFromSkeletalMesh(USkeletalMesh* InSkeletalMesh, FName InNamespace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportCurves(USkeleton* InSkeleton, FName InNamespace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportBonesFromSkeletalMesh(USkeletalMesh* InSkeletalMesh, const FName& InNamespace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportBones(USkeleton* InSkeleton, FName InNamespace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URigHierarchy* GetHierarchy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRigControlSettings GetControlSettings(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportToText(TArray<FRigElementKey> InKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportSelectionToText() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    bool DeselectHierarchyKey(FRigHierarchyKey InKey, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool DeselectElement(FRigElementKey InKey);
    
    UFUNCTION(BlueprintCallable)
    bool DeselectComponent(FRigComponentKey InKey);
    
    UFUNCTION(BlueprintCallable)
    bool ClearSelection(bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    FRigComponentKey AddTopLevelComponent(UScriptStruct* InComponentStruct, FName InName, const FString& InContent, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddSocket(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, const FLinearColor& InColor, const FString& InDescription, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, FName InDisplayLabel, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddConnector(FName InName, FRigConnectorSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigComponentKey AddComponent(UScriptStruct* InComponentStruct, FName InName, FRigElementKey InElement, const FString& InContent, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool AddChannelHost(FRigElementKey InChannel, FRigElementKey InHost, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool AddAvailableSpace(FRigElementKey InControl, FRigElementKey InSpace, FName InDisplayLabel, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand);
    
};

