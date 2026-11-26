#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EInventoryHighlightType.h"
#include "EInventoryItemType.h"
#include "EInventoryWindowType.h"
#include "ItemSnap.h"
#include "InventoryWidgetInterface.generated.h"

class AActor;
class UContainerElementWidget;
class UInventoryComponent;
class UItemWidget;
class UUserWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UInventoryWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IInventoryWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMagCapacity(int32 CurrentMagCapacity, int32 MaxMagCapacity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleSlot(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleHighlight(TEnumAsByte<EInventoryHighlightType> HighlightType, bool Activate, bool Valid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleErrorMessage(bool Activate, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StatChanged(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVendorListIndex(int32 newIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLootSectionTitle(const FText& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLootContent(UUserWidget* WidgetRef, FName ContentName, AActor* LootActorRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActiveInventoryWindow(UUserWidget* NewActiveWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestQuickLoot(UItemWidget* ItemRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveInventoryWindow(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveSnap(FItemSnap ItemSnap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRotated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeInventoryWidget(UInventoryComponent* InventoryComponentRef, const TArray<FGuid>& NewMainContainerUIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGuid GetItemUID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TEnumAsByte<EInventoryItemType> GetItemType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInventoryComponent* GetInventoryComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UItemWidget*> GetContainerItems();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UContainerElementWidget*> GetContainerElements();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompareStat(bool bStart, float CompareValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearInventoryWindows();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItemContextMenu(UItemWidget* ItemRef, FVector2D MousePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddInventoryWindow(UItemWidget* ItemRef, TEnumAsByte<EInventoryWindowType> InventoryWindowType);
    
};

