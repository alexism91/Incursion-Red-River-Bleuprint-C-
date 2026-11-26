#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EPickUpPresentation.h"
#include "OnActorHiddenUpdatedDelegate.h"
#include "OnCanInteractUpdatedDelegate.h"
#include "OnDroppedDelegate.h"
#include "OnLeaderPoseUpdatedDelegate.h"
#include "OnMeshHiddenUpdatedDelegate.h"
#include "OnPickupDelegate2.h"
#include "PickUpContainerItem.h"
#include "PickUpPresentationState.h"
#include "PickUpComponent.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UPickUpComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Visibility, meta=(AllowPrivateAccess=true))
    bool bIsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshHiddenShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickUpOwner, meta=(AllowPrivateAccess=true))
    AActor* PickUpOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LocPickupOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PrevPickupOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* RootComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeaderPoseUpdated OnLeaderPoseUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanInteractUpdated OnCanInteractUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorHiddenUpdated OnActorHiddenUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshHiddenUpdated OnMeshHiddenUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDropped OnDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickup OnPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationSettleTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PresentationState, meta=(AllowPrivateAccess=true))
    FPickUpPresentationState PresentationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPickUpPresentation Presentation;
    
public:
    UPickUpComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WakeAnimation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void UpdateActorOwner(AActor* NewOwner, bool bNewIsHidden);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWorn(bool bWorn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMeshHidden(bool NewHidden, bool NewHiddenShadows);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActorHidden(bool NewHidden);
    
    UFUNCTION(BlueprintCallable)
    void RequestSimulatePhysics(bool bStart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestRenderStatic(bool bStatic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickUp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Visibility();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PresentationState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickUpOwner();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnItemUpdated(FPickUpContainerItem PickUpContainerItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPickUpPresentation GetPresentation() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Drop(FTransform DropTransform, bool bOverrideTransform);
    
    UFUNCTION(BlueprintCallable)
    void ApplyItemState(const FGameplayTagContainer& NewItemState);
    
};

