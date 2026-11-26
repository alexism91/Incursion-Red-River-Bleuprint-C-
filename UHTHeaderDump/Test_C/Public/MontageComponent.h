#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CharacterMontageSet.h"
#include "MontageEventDelegate.h"
#include "MontageComponent.generated.h"

class AActor;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UMontageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPredicted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MontageInstanceID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageEvent OnMontageStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageEvent OnMontageStopped;
    
    UMontageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopSingleMontage_Server(FName LinkedAnimGraph, UAnimMontage* Montage, bool All, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopSingleMontage_Networked(FName LinkedAnimGraph, UAnimMontage* Montage, float BlendOutTime, bool All);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopSingleMontage_MC(FName LinkedAnimGraph, UAnimMontage* Montage, float BlendOutTime, bool All);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopCharacterMontage_Server(AActor* Weapon, FName LinkedAnimGraph, FCharacterMontageSet CharacterMontages, float BlendOutTime, bool All);
    
    UFUNCTION(BlueprintCallable)
    void StopCharacterMontage_Networked(AActor* Weapon, FName LinkedAnimGraph, FCharacterMontageSet CharacterMontages, float BlendOutTime, bool All);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopCharacterMontage_MC(AActor* Weapon, FName LinkedAnimGraph, FCharacterMontageSet CharacterMontages, float BlendOutTime, bool All);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlaySingleMontage_Server(FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlaySingleMontage_Networked(FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage, bool Predicted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlaySingleMontage_MC(FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayCharacterMontage_Server(AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterMontage_Networked(AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength, bool Predicted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayCharacterMontage_MC(AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength);
    
    UFUNCTION(BlueprintCallable)
    bool IsMontagePlaying(FName LinkedAnimGraph);
    
};

