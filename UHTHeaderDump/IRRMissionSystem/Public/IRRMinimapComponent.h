#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRMinimapComponent.generated.h"

class APlayerController;
class UIRRMarkerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRMinimapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIRRMinimapComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIRRMarkerComponent* SpawnPingComponent(FVector2D PingLocation, APlayerController* Instigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemovePing();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CreatePing(FVector2D PingLocation, UIRRMarkerComponent* TargetMarker);
    
};

