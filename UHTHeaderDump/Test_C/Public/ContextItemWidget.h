#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRBaseButtonWidget -FallbackName=IRRBaseButtonWidget
#include "ContextItemWidget.generated.h"

class UItemContext;
class UItemWidget;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UContextItemWidget : public UIRRBaseButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ParentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemWidget* ItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemContext* ContextRef;
    
    UContextItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitItemContext(UUserWidget* NewParentRef, UItemWidget* NewItemRef, UItemContext* NewContextRef);
    
};

