#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ContainerElementWidget.h"
#include "ContainerItem.h"
#include "EquipToContainerWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UEquipToContainerWidget : public UContainerElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeadline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EquipToSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOnDragStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BackgroundImage;
    
    UEquipToContainerWidget();

    UFUNCTION(BlueprintCallable)
    void OnItemDragged(FContainerItem DraggedItem, bool bStart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighlightEquipToContainer(bool bHighlight, bool bValid);
    
};

