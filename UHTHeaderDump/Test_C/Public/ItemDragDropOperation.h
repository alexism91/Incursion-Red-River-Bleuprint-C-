#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=DragDropOperation -FallbackName=DragDropOperation
#include "ContainerItem.h"
#include "OnItemRotatedDelegate.h"
#include "ItemDragDropOperation.generated.h"

class UIRRItemDefinition;
class UInventoryComponent;
class UItemWidget;

UCLASS(Blueprintable)
class TEST_C_API UItemDragDropOperation : public UDragDropOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ItemOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemWidget* ItemWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MousePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem SourceItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemDefinition* ReplaceWithDefinition;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRotated OnItemChanged;
    
    UItemDragDropOperation();

    UFUNCTION(BlueprintCallable)
    bool TryToggleForm(FString& OutError);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RotateItem(bool& OutRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnItemChanged(UIRRItemDefinition* OldForm, const FContainerItem& NewItem, bool bIsRotated, bool bToSourceForm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRItemDefinition* GetSourceDefinition() const;
    
};

