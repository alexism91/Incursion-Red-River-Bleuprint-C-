#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VehicleChassisBase.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UVehicleChassisBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeasureOwnerMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStandDownWhenDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WreckRiderTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlausibleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RideHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReportContactSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateOnlyWhenRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderedGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UVehicleChassisBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SnapToGround();
    
    UFUNCTION(BlueprintCallable)
    void SettleWheelsOntoWreck(UPrimitiveComponent* Body, int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void SetSupportPoint(const FVector& ActorSpaceLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceDetail(bool bFrozen, float UpdateInterval);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoredActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RefreshWheels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSupportPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYawRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLinearSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroundedWheelCount() const;
    
    UFUNCTION(BlueprintCallable)
    void CollapseOntoWreckBody(USceneComponent* Body);
    
    UFUNCTION(BlueprintCallable)
    void ClearSupportPoint();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* Actor);
    
};

