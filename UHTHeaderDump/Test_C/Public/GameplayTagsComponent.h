#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "OnOwnedGameplayTagDelegateDelegate.h"
#include "OnOwnedGameplayTagsUpdatedDelegate.h"
#include "GameplayTagsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UGameplayTagsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OwnedGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwnedGameplayTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RepOwnedGameplayTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOwnedGameplayTagsUpdated OnOwnedGameplayTagsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOwnedGameplayTagDelegate OnTagAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOwnedGameplayTagDelegate OnTagRemoved;
    
    UGameplayTagsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateReplicatedTags();
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameplayTags(const FGameplayTagContainer ToAddAbilities, const FGameplayTagContainer ToRemoveAbilities);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReplicateGameplayTags(FGameplayTagContainer NewGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwnedGameplayTags();
    
    UFUNCTION(BlueprintCallable)
    bool HasGameplayTags(const FGameplayTagContainer CompareToTags, bool ExactMatch);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetOwnedGameplayTags();
    
};

