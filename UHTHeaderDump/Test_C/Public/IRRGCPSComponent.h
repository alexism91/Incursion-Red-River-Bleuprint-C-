#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
#include "EquippableComponent.h"
#include "IRRGameplaySettings.h"
#include "OnGCPSObjectiveLedsDelegate.h"
#include "OnPowerSwitchDelegate.h"
#include "IRRGCPSComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UPrimitiveComponent;
class USceneComponent;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRGCPSComponent : public UEquippableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderInterpSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderInterpSpeedDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbStickInterpSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbStickInterpSpeedDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPowerOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ThumbStickValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThumbStickDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerSwitch OnPowerSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> ScreenTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CursorEdgeMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GimbalEdgeSearchSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindNearbyResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectiveFinderInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ResourceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, int32> LEDDistanceBands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkRtpc> DistanceRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FoundTargetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> LostTargetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkEmitter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGCPSObjectiveLeds OnObjectiveLedsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* LoadedResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* LoadedDistanceRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoadedFoundTargetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoadedLostTargetEvent;
    
public:
    UIRRGCPSComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D WorldToScreenCursor(const UWidgetComponent* Screen, FVector WorldLocation, float InScreenScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool TraceScreenCursor(const USceneComponent* Pointer, const UWidgetComponent* Screen, const UPrimitiveComponent* ScreenCollision, FVector2D& OutCursor) const;
    
    UFUNCTION(BlueprintCallable)
    void SwitchPower(bool bPowerOn);
    
    UFUNCTION(BlueprintCallable)
    void SetThumbStickValue(FVector2D NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetThumbStickDown(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderValue(float NewValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleControllerSettingsChanged(FIRRGameplaySettings NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetThumbStickValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetThumbStickDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetScreenCursorBounds(const UWidgetComponent* Screen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCursorOvershoot(FVector2D CursorLocation, FVector2D Bounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetCursorBounds(FVector2D DrawSize, FVector2D EdgeMargin, float InScreenScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ClampCursorToBounds(FVector2D CursorLocation, FVector2D Bounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AimGimbal(USceneComponent* YawGimbal, USceneComponent* PitchGimbal, const USceneComponent* Pointer, const UWidgetComponent* Screen, const UPrimitiveComponent* ScreenCollision, float YawDelta, float PitchDelta) const;
    
};

