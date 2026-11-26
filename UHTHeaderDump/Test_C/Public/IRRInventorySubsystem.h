#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ContainerItem.h"
#include "OnContainerSearchCompletedDelegate.h"
#include "OnContainerSearchStartedDelegate.h"
#include "OnEnhancedUISettingsLoadedDelegate.h"
#include "OnImportSettingsLoadedDelegate.h"
#include "OnItemDragDelegate.h"
#include "OnItemEligibilityChangedDelegate.h"
#include "OnItemHoveredDelegate.h"
#include "OnItemSelectionChangedDelegate.h"
#include "OnVendorSettingsLoadedDelegate.h"
#include "SearchQueueItem.h"
#include "IRRInventorySubsystem.generated.h"

class UContainerElementWidget;
class UInventoryComponent;
class UInventoryEnhancedUISettings;
class UInventoryImportSettings;
class UItemWidget;
class UObject;
class UVendorSettings;

UCLASS(Blueprintable)
class TEST_C_API UIRRInventorySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemHovered OnItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDrag OnItemDrag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImportSettingsLoaded OnImportSettingsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnhancedUISettingsLoaded OnEnhancedUISettingsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVendorSettingsLoaded OnVendorSettingsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerSearchStarted OnContainerSearchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerSearchCompleted OnContainerSearchCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEligibilityChanged OnItemEligibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionChanged OnItemSelectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryImportSettings* ImportSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryEnhancedUISettings* EnhancedUISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVendorSettings* VendorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportSettingsLoadInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnhancedUISettingsLoadInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVendorSettingsLoadInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSearchQueueItem> SearchQueue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemWidget* SearchItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSearchQueueItem CurrentSearchItem;
    
public:
    UIRRInventorySubsystem();

    UFUNCTION(BlueprintCallable)
    bool ToggleItemSelected(UInventoryComponent* OwnerComp, const FContainerItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void StopSearching(bool bClearQueue);
    
    UFUNCTION(BlueprintCallable)
    void StartSearching();
    
    UFUNCTION(BlueprintCallable)
    void SetItemSelectionSource(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void SetItemEligibilitySource(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void ProcessSearchQueue();
    
    UFUNCTION(BlueprintCallable)
    void PlayQuickActionAudio(const FContainerItem& Item, bool bEquip, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void NotifyItemWidgetRemoved(UItemWidget* ItemWidget);
    
    UFUNCTION(BlueprintCallable)
    void NotifyItemSelectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void NotifyItemEligibilityChanged();
    
    UFUNCTION(BlueprintCallable)
    bool LoadVendorSettingsAsync();
    
    UFUNCTION(BlueprintCallable)
    bool LoadImportSettingsAsync();
    
    UFUNCTION(BlueprintCallable)
    bool LoadEnhancedUISettingsAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemSelected(UInventoryComponent* OwnerComp, const FContainerItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEligible(UInventoryComponent* OwnerComp, const FContainerItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemSelectionSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemEligibilitySource() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearItemSelectionSource(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void ClearItemEligibilitySource(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastItemHovered(const FContainerItem& HoveredItem, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastItemDrag(const FContainerItem& DraggedItem, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToSearchQueue(UItemWidget* ItemWidget);
    
    UFUNCTION(BlueprintCallable)
    void AddContainerToSearchQueue(UContainerElementWidget* ContainerElementWidget);
    
};

