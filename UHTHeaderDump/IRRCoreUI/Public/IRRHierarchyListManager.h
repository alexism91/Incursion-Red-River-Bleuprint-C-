#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "OnItemAddedDelegate.h"
#include "OnItemRemovedDelegate.h"
#include "OnItemsUpdatedDelegate.h"
#include "IRRHierarchyListManager.generated.h"

class UIRRHierarchyListItemWidget;

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRHierarchyListManager : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRHierarchyListItemWidget*> HierarchyListItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAdded OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRemoved OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsUpdated OnItemsUpdated;
    
    UIRRHierarchyListManager();

    UFUNCTION(BlueprintCallable)
    void UpdateItems();
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UIRRHierarchyListItemWidget* ParentRef, UIRRHierarchyListItemWidget* ItemWidget);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHierarchyListIndex(UIRRHierarchyListItemWidget* ItemWidget);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHierarchyListCount();
    
    UFUNCTION(BlueprintCallable)
    void AddItem(UIRRHierarchyListItemWidget* ParentRef, UIRRHierarchyListItemWidget* ItemWidget, int32& NewHierarchyIndex);
    
};

