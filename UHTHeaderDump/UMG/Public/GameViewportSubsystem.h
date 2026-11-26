#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "GameViewportWidgetSlot.h"
#include "GameViewportSubsystem.generated.h"

class ULocalPlayer;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UGameViewportSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UGameViewportSubsystem();

    UFUNCTION(BlueprintCallable)
    static FGameViewportWidgetSlot SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, const UWidget* Widget, FVector2D Position, bool bRemoveDPIScale);
    
    UFUNCTION(BlueprintCallable)
    static FGameViewportWidgetSlot SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D Size);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetWidgetSlot(UWidget* Widget, FGameViewportWidgetSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsWidgetAdded(const UWidget* Widget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FGameViewportWidgetSlot GetWidgetSlot(const UWidget* Widget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool AddWidgetForPlayer(UWidget* Widget, ULocalPlayer* Player, FGameViewportWidgetSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool AddWidget(UWidget* Widget, FGameViewportWidgetSlot Slot);
    
};

