#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=EToolShutdownType -FallbackName=EToolShutdownType
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
#include "EScriptableToolGizmoStateChangeType.h"
#include "EScriptableToolShutdownType.h"
#include "EScriptableToolStartupRequirements.h"
#include "EToolsFrameworkOutcomePins.h"
#include "ScriptableToolGizmoOptions.h"
#include "ScriptableToolGroupSet.h"
#include "Templates/SubclassOf.h"
#include "ToolBoolPropertyModifiedDelegateDelegate.h"
#include "ToolEnumPropertyModifiedDelegateDelegate.h"
#include "ToolFNamePropertyModifiedDelegateDelegate.h"
#include "ToolFloatPropertyModifiedDelegateDelegate.h"
#include "ToolIntPropertyModifiedDelegateDelegate.h"
#include "ToolObjectPropertyModifiedDelegateDelegate.h"
#include "ToolPropertyModifiedDelegateDelegate.h"
#include "ToolStringPropertyModifiedDelegateDelegate.h"
#include "ScriptableInteractiveTool.generated.h"

class UCombinedTransformGizmo;
class UCustomScriptableToolBuilder;
class UPreviewGeometry;
class UScriptableInteractiveToolPropertySet;
class UScriptableToolLineSet;
class UScriptableToolPointSet;
class UScriptableToolTriangleSet;
class UScriptableTool_HUDAPI;
class UScriptableTool_RenderAPI;
class UToolTarget;
class UToolTargetScriptableToolBuilder;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableInteractiveTool : public UInteractiveTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolLongName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomIconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowToolInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScriptableToolShutdownType ToolShutdownType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScriptableToolStartupRequirements ToolStartupRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomScriptableToolBuilder> CustomToolBuilderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UToolTargetScriptableToolBuilder> ToolTargetToolBuilderClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> TargetWorld;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UScriptableTool_RenderAPI* RenderHelper;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UScriptableTool_HUDAPI* DrawHUDHelper;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UCombinedTransformGizmo*> Gizmos;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UToolTarget*> Targets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UScriptableToolLineSet* DefaultLineSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolLineSet*> LineSets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UScriptableToolPointSet* DefaultPointSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolPointSet*> PointSets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UScriptableToolTriangleSet* DefaultTriangleSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolTriangleSet*> TriangleSets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* ToolDrawableGeometry;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScriptableToolGroupSet GroupTags;
    
    UScriptableInteractiveTool();

    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchStringProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolStringPropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolPropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchObjectProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolObjectPropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchNameProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolFNamePropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchIntProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolIntPropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchFloatProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolFloatPropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchEnumProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolEnumPropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* WatchBoolProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolBoolPropertyModifiedDelegate& OnModified);
    
    UFUNCTION(BlueprintCallable)
    void SetPropertySetVisibleByName(const FString& Identifier, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayWidget(UUserWidget* Widget, bool bMakeDraggable);
    
    UFUNCTION(BlueprintCallable)
    void SetGizmoVisible(const FString& Identifier, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGizmoTransform(const FString& Identifier, FTransform NewTransform, bool bUndoable);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* SavePropertySetSettings(UScriptableInteractiveToolPropertySet* PropertySet, const FString& SaveKey);
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* RestorePropertySetSettings(UScriptableInteractiveToolPropertySet* PropertySet, const FString& SaveKey);
    
    UFUNCTION(BlueprintCallable)
    void RequestToolShutdown(bool bAccept, bool bShowUserPopupMessage, FText UserMessage);
    
    UFUNCTION(BlueprintCallable)
    void RemovePropertySetByName(const FString& Identifier, EToolsFrameworkOutcomePins& Outcome);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScriptTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScriptShutdown(EToolShutdownType ShutdownType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScriptSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScriptRender(UScriptableTool_RenderAPI* RenderAPI);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScriptDrawHUD(UScriptableTool_HUDAPI* DrawHUDAPI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnScriptCanAccept() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGizmoTransformStateChange(const FString& GizmoIdentifier, FTransform CurrentTransform, EScriptableToolGizmoStateChangeType ChangeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGizmoTransformChanged(const FString& GizmoIdentifier, FTransform NewTransform);
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetToolWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UToolTarget*> GetToolTargets() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetGizmoTransform(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScriptableToolTriangleSet* GetDefaultTriangleSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScriptableToolPointSet* GetDefaultPointSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScriptableToolLineSet* GetDefaultLineSet() const;
    
    UFUNCTION(BlueprintCallable)
    void ForcePropertySetUpdateByName(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    void DisplayUserWarningMessage(FText Message);
    
    UFUNCTION(BlueprintCallable)
    void DisplayUserHelpMessage(FText Message);
    
    UFUNCTION(BlueprintCallable)
    void DestroyTRSGizmo(const FString& Identifier, EToolsFrameworkOutcomePins& Outcome);
    
    UFUNCTION(BlueprintCallable)
    void CreateTRSGizmo(const FString& Identifier, FTransform InitialTransform, FScriptableToolGizmoOptions GizmoOptions, EToolsFrameworkOutcomePins& Outcome);
    
    UFUNCTION(BlueprintCallable)
    void ClearUserMessages(bool bHelpMessage, bool bWarningMessage);
    
    UFUNCTION(BlueprintCallable)
    void ClearOverlayWidget();
    
    UFUNCTION(BlueprintCallable)
    UScriptableToolTriangleSet* AddTriangleSet();
    
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveToolPropertySet* AddPropertySetOfType(TSubclassOf<UScriptableInteractiveToolPropertySet> PropertySetType, const FString& Identifier, EToolsFrameworkOutcomePins& Outcome);
    
    UFUNCTION(BlueprintCallable)
    UScriptableToolPointSet* AddPointSet();
    
    UFUNCTION(BlueprintCallable)
    void AddLogMessage(FText Message, bool bHighlighted);
    
    UFUNCTION(BlueprintCallable)
    UScriptableToolLineSet* AddLineSet();
    
};

