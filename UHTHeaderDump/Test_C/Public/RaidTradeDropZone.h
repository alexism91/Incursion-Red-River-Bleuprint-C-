#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "OnRaidTradeDropHoverDelegate.h"
#include "RaidTradeDropZone.generated.h"

class URaidTradeWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API URaidTradeDropZone : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeDropHover OnDragHover;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaidTradeWidget* TradeTable;
    
public:
    URaidTradeDropZone();

    UFUNCTION(BlueprintCallable)
    void SetTradeTable(URaidTradeWidget* InTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnItemDropped(bool bAccepted, const FText& reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDragHover(bool bActive, bool bValid, const FText& reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URaidTradeWidget* GetTradeTable() const;
    
};

