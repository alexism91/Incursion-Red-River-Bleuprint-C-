#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InventoryWidgetInterface.h"
#include "Templates/SubclassOf.h"
#include "InspectCanvasWidget.generated.h"

class UCanvasPanel;
class UInventoryWindowWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInspectCanvasWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInventoryWindowWidget> InspectWindowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInventoryWindowWidget> ContainerWindowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* WindowCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryWindowWidget* ActiveWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UInventoryWindowWidget*> InspectWindowsByItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UInventoryWindowWidget*> ContainerWindowsByItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventoryWindowWidget*> WindowStack;
    
public:
    UInspectCanvasWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ComputeWindowPositionBesideItem(const FVector2D& ItemTopLeft, const FVector2D& ItemBottomRight, const FVector2D& WindowSize, const FVector2D& CanvasSize, float ScreenMargin, float ItemGap);
    

    // Fix for true pure virtual functions not being implemented
};

