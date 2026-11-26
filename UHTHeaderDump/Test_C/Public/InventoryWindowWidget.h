#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CurrentStatItem.h"
#include "OnInventoryWindowClosedDelegate.h"
#include "InventoryWindowWidget.generated.h"

class AItemInspectActor;
class UItemWidget;
class UStatItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventoryWindowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryWindowClosed OnInventoryWindowClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemWidget* ItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* InventoryWindowCanvasRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentMousePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnInspectImageMouseDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItemInspectActor* InspectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* SpecialContainerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UStatItemWidget*> StatItems;
    
    UInventoryWindowWidget();

    UFUNCTION(BlueprintCallable)
    void OnItemStatsChanged(TArray<FCurrentStatItem> NewStats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDropped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnItemStatsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitInventoryWindow(UItemWidget* NewItemRef, UUserWidget* NewInventoryWindowWidgetCanvasRef);
    
};

