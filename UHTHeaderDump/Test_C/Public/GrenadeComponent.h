#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EquippableComponent.h"
#include "Templates/SubclassOf.h"
#include "GrenadeComponent.generated.h"

class AGrenadeActor;
class UGrenadeDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UGrenadeComponent : public UEquippableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGrenadeActor> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThrowSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ThrowBarkTag;
    
    UGrenadeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ThrowGrenade_Server(FTransform SpawnTransform, FVector ThrowDirection, float ThrowSpeed, FVector HandWorldPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ThrowGrenade_Networked(FGameplayTag ActionTag, float ThrowSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetAimedThrowTarget(const FVector& TargetLocation, bool bFavorHighArc, float LobPitch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PredictGrenadeTrajectory(const FVector& StartLocation, const FVector& ThrowDirection, float ThrowSpeed, TArray<FVector>& OutPathPositions, FVector& FinalLocation, int32 MaxBounces) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGrenadeThrown(AGrenadeActor* Grenade);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAimedThrowTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGrenadeDataAsset* GetGrenadeDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void ClearAimedThrowTarget();
    
};

