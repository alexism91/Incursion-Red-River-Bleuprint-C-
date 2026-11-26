#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DoorSwing.h"
#include "OnDoorSwingFinishedDelegate.h"
#include "DoorSwingComponent.generated.h"

class UCurveFloat;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UDoorSwingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorSwingFinished OnSwingFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSwingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClosedTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsSyncInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeSwingInterpSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Swing, meta=(AllowPrivateAccess=true))
    FDoorSwing Swing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorOffsetYaw, meta=(AllowPrivateAccess=true))
    float DoorOffsetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* HingeParent;
    
public:
    UDoorSwingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SwingTo(float TargetYaw, UCurveFloat* AlphaCurve, float PlayRate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SwingAlongCurve(UCurveFloat* OffsetCurve, float Direction, float PlayRate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFreeSwingEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Swing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorOffsetYaw();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwinging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeSwinging() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeDoor(UPrimitiveComponent* InDoor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpenAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHingeYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosedYaw() const;
    
};

