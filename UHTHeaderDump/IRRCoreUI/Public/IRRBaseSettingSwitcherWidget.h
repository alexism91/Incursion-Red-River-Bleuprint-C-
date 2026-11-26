#pragma once
#include "CoreMinimal.h"
#include "IRRButtonConstructor.h"
#include "IRRUserWidget.h"
#include "IRRBaseSettingSwitcherWidget.generated.h"

class UHorizontalBox;
class UIRRBaseButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRBaseSettingSwitcherWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSwitcherSelected, UIRRBaseButtonWidget*, ButterRef, int32, Index);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRButtonConstructor> SwitchersSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRBaseButtonWidget*> SwitchersRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitcherSelected OnSwitcherSelected;
    
    UIRRBaseSettingSwitcherWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupSwitchers();
    
    UFUNCTION(BlueprintCallable)
    void SetSwitcherIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitcherEnabled(int32 Index, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSwitcherButtonSelected(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRBaseButtonWidget* GetSwitcherRefByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSwitcherIndexByID(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSwitcherIDByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSwitcherCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveSwitcherIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveSwitcherID() const;
    
};

