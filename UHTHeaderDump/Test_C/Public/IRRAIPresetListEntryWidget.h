#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "IRRAIPresetMetadata.h"
#include "IRRAIPresetListEntryWidget.generated.h"

class UIRRAIPresetListItem;
class UIRRBaseButtonWidget;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRAIPresetListEntryWidget : public UIRRUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimestampText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* DeleteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAIPresetListItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfirmDelete;
    
    UIRRAIPresetListEntryWidget();

    UFUNCTION(BlueprintCallable)
    bool RequestDelete();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPresetSet(const FIRRAIPresetMetadata& Preset, bool bIsActive, bool bReadOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPresetSelectedChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDeleteArmedChanged(bool bArmed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeleteArmed() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDeleteClicked(UIRRBaseButtonWidget* Button);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTimestampText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDelete() const;
    

    // Fix for true pure virtual functions not being implemented
};

