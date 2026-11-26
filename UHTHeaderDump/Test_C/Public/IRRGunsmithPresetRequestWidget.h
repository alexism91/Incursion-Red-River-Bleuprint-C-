#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "OnGunsmithPresetAcceptStateChangedDelegate.h"
#include "OnGunsmithPresetAppliedDelegate.h"
#include "OnGunsmithPresetRequestEventDelegate.h"
#include "IRRGunsmithPresetRequestWidget.generated.h"

class UInventoryComponent_Gunsmith;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRGunsmithPresetRequestWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGunsmithPresetAcceptStateChanged OnAcceptStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGunsmithPresetRequestEvent OnSubmitRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGunsmithPresetApplied OnPresetApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ReasonText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent_Gunsmith> GunsmithOverride;
    
public:
    UIRRGunsmithPresetRequestWidget();

    UFUNCTION(BlueprintCallable)
    bool TryAccept(FText& OutReason);
    
    UFUNCTION(BlueprintCallable)
    void SetGunsmith(UInventoryComponent_Gunsmith* InGunsmith);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyAcceptStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAcceptStateChanged(bool bCanAccept, const FText& reason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent_Gunsmith* GetGunsmith() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAccept(FText& OutReason) const;
    
};

