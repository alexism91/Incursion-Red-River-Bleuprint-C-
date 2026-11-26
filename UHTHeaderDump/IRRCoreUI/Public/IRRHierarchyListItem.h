#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRHierarchyListItem.generated.h"

class UIRRHierarchyListItemWidget;

USTRUCT(BlueprintType)
struct FIRRHierarchyListItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRHierarchyListItemWidget* ParentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRHierarchyListItemWidget*> ChildItems;
    
    IRRCOREUI_API FIRRHierarchyListItem();
};

