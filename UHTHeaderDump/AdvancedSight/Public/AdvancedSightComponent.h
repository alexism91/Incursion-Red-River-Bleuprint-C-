#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AdvancedSightComponentDelegateDelegate.h"
#include "AdvancedSightComponentLoseTargetDelegateDelegate.h"
#include "AdvancedSightComponentPerceiveTargetDelegateDelegate.h"
#include "AdvancedSightTargetGainValuePair.h"
#include "EAdvancedSightTargetState.h"
#include "AdvancedSightComponent.generated.h"

class AActor;
class UAdvancedSightData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ADVANCEDSIGHT_API UAdvancedSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedSightComponentDelegate OnTargetSpotted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedSightComponentPerceiveTargetDelegate OnTargetPerceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedSightComponentLoseTargetDelegate OnTargetLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedSightComponentDelegate OnTargetForgotten;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAdvancedSightData* SightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EyeSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOnlyYawFromEyeSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PerceivedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpottedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RememberedTargets;
    
public:
    UAdvancedSightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverrideSightData(UAdvancedSightData* NewSightData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetSpotted(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetRemembered(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetPerceived(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTargetSpotted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTargetRemembered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTargetPerceived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAdvancedSightTargetState GetStateForTarget(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSpottedTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAdvancedSightData* GetSightData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetRememberedTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetPerceivedTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAdvancedSightTargetGainValuePair GetHighestGainValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGainValueForTarget(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetEyePointOfViewTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBodyActor() const;
    
    UFUNCTION(BlueprintCallable)
    void ForcePerceiveTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ForceForgetTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ForceForgetAllTargets();
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void AddGainToTarget(AActor* TargetActor, float Value);
    
};

