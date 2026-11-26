#pragma once
#include "CoreMinimal.h"
#include "IRRRegisteredTabInfo.h"
#include "IRRTabDescriptor.h"
#include "IRRUserWidget.h"
#include "IRRTabListWidget.generated.h"

class UIRRBaseButtonWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRTabListWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTabSelected, FName, TabId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTabListRebuilt);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabContentCreated, FName, TabId, UIRRUserWidget*, TabWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonRemoval, FName, TabId, UIRRBaseButtonWidget*, TabButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonCreation, FName, TabId, UIRRBaseButtonWidget*, TabButton);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRTabDescriptor> PreregisteredTabInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabContentCreated OnTabContentCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonCreation OnTabButtonCreation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabSelected OnTabSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonRemoval OnTabButtonRemoval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabListRebuilt OnTabListRebuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRRegisteredTabInfo> RegisteredTabsByID;
    
    UIRRTabListWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupTabs();
    
    UFUNCTION(BlueprintCallable)
    bool SelectTabByIndex(int32 TabIndex, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTabByID(FName TabNameId, bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTab(FName TabNameId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTabs();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterTab(FIRRTabDescriptor TabInfo, const int32 TabIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabRemoval(FName TabNameId, UIRRBaseButtonWidget* TabButton);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabCreation(FName TabNameId, UIRRBaseButtonWidget* TabButton);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabButtonSelected(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviousTabInputAction();
    
    UFUNCTION(BlueprintCallable)
    void HandleNextTabInputAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTabCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRBaseButtonWidget* GetTabButtonBaseByIndex(int32 TabIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRBaseButtonWidget* GetTabButtonBaseByID(FName TabNameId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRegisteredTabInfoByID(const FName TabNameId, FIRRRegisteredTabInfo& OutTabInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreregisteredTabInfoByID(const FName TabNameId, FIRRTabDescriptor& OutTabInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveTabIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveTabID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindTabButtonIndex(UIRRBaseButtonWidget* ButtonToFind) const;
    
};

