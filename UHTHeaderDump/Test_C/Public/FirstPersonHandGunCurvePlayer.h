#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FirstPersonCoreSubObject.h"
#include "HandGunCurvePlaying.h"
#include "FirstPersonHandGunCurvePlayer.generated.h"

class UFirstPersonHandGunCurveAnim;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonHandGunCurvePlayer : public UFirstPersonCoreSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverlayLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OverlayRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHandGunCurvePlaying> Playing;
    
public:
    UFirstPersonHandGunCurvePlayer();

    UFUNCTION(BlueprintCallable)
    void StopClip(UFirstPersonHandGunCurveAnim* Clip, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAll(float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop(int32 Handle, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayingIntensity(int32 Handle, float InIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetIntensity(float InIntensity);
    
    UFUNCTION(BlueprintCallable)
    int32 Play(UFirstPersonHandGunCurveAnim* Clip, float NewIntensity, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandlePlaying(int32 Handle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlay(FVector& OutLocation, FRotator& OutRotation) const;
    
};

