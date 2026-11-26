#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InventoryWidgetInterface.h"
#include "Templates/SubclassOf.h"
#include "ContextCanvasWidget.generated.h"

class UCanvasPanel;
class UContextMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UContextCanvasWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UContextMenuWidget> ContextMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuScreenMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenGraceSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MenuCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UContextMenuWidget* ContextMenuRef;
    
    UContextCanvasWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveCurrentContext(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ComputeContextMenuPosition(const FVector2D& CursorPosition, const FVector2D& MenuSize, const FVector2D& CanvasSize, float ScreenMargin, float OverlapDistance);
    
    UFUNCTION(BlueprintCallable)
    void CloseContextMenu();
    

    // Fix for true pure virtual functions not being implemented
};

