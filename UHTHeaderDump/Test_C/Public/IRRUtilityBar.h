#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "OnInputActionConsumedDelegate2.h"
#include "IRRUtilityBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRUtilityBar : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaddingBetweenItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> Items;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionConsumed OnInputActionConsumed;
    
    UIRRUtilityBar();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveInputAction(FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceivePressedKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddInputAction(FDataTableRowHandle InputActionRow);
    
};

