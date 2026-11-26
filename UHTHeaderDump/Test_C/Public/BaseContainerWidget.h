#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ContainerItem.h"
#include "InventoryWidgetInterface.h"
#include "MainContainer.h"
#include "OnItemCompareDelegate.h"
#include "BaseContainerWidget.generated.h"

class UBaseContainerWidget;
class UContainerElementWidget;
class UInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UBaseContainerWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseContainerWidget* SpecialContainerWidgetParentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MainContainerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UContainerElementWidget*> ContainerElements;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemCompare OnItemCompare;
    
    UBaseContainerWidget();

    UFUNCTION(BlueprintCallable)
    void SetItemSearch(const FString& NewItemSearch);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(FMainContainer MainContainer, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(FMainContainer MainContainer, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitContainer(UInventoryComponent* NewInventoryComponent, FGuid NewMainContainerUID);
    

    // Fix for true pure virtual functions not being implemented
};

