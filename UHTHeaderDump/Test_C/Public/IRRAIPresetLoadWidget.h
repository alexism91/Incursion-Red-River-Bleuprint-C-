#pragma once
#include "CoreMinimal.h"
#include "IRRAIPresetRequestWidget.h"
#include "OnAIPresetAppliedDelegate.h"
#include "OnAIPresetSelectionChangedDelegate.h"
#include "IRRAIPresetLoadWidget.generated.h"

class UIRRAIPresetListItem;
class UListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRAIPresetLoadWidget : public UIRRAIPresetRequestWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIPresetSelectionChanged OnPresetSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIPresetApplied OnPresetDeleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBuiltInPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreselectActivePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadIntoVariantId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* PresetList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIRRAIPresetListItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRAIPresetListItem* SelectedItem;
    
public:
    UIRRAIPresetLoadWidget();

    UFUNCTION(BlueprintCallable)
    void SelectPresetItem(UIRRAIPresetListItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPresetSelectionChanged(UIRRAIPresetListItem* Item, bool bCanLoad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedPresetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIPresetListItem* GetSelectedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRAIPresetListItem*> GetPresetItems() const;
    
    UFUNCTION(BlueprintCallable)
    bool DeleteSelected();
    
    UFUNCTION(BlueprintCallable)
    bool DeletePresetItem(UIRRAIPresetListItem* PresetItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeleteSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeletePresetItem(const UIRRAIPresetListItem* PresetItem) const;
    
};

