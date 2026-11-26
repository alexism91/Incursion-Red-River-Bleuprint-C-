#pragma once
#include "CoreMinimal.h"
#include "IRRUserWidget.h"
#include "IRRHierarchyListItemWidget.generated.h"

class UIRRHierarchyListItemWidget;
class UIRRHierarchyListManager;

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRHierarchyListItemWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRHierarchyListManager* HierarchyListManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TreeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HierarchyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRHierarchyListItemWidget*> ChildItems;
    
    UIRRHierarchyListItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIndex(int32 NewHierarchyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitItem(int32 NewHierarchyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UIRRHierarchyListItemWidget*> GetChildItems();
    
};

