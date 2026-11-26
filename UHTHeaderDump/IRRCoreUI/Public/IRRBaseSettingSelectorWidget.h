#pragma once
#include "CoreMinimal.h"
#include "IRRUserWidget.h"
#include "OnSelectorIndexChangedDelegate.h"
#include "IRRBaseSettingSelectorWidget.generated.h"

class UIRRBaseButtonWidget;
class UIRRTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRBaseSettingSelectorWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* LeftArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* RightArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRTextBlock* CurrentSelectionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectorIndexChanged OnSelectionChanged;
    
    UIRRBaseSettingSelectorWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateArrowButtonsState();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectionByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextOption();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSelectionText();
    
    UFUNCTION(BlueprintCallable)
    void InitFromNames(const TArray<FName>& OptionNames, int32 InitialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidSelection() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRightArrowClicked(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandleLeftArrowClicked(UIRRBaseButtonWidget* ButtonRef);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentEntry() const;
    
};

