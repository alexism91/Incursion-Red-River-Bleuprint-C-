#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRResourceSnapshot.h"
#include "OnResourceChangedBPDelegate.h"
#include "IRRResourceComponent.generated.h"

class ACharacter;
class UIRRResourceRegistry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRRESOURCESYSTEM_API UIRRResourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> DefaultAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> DefaultMaxAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRResourceRegistry> Registry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespectMaxCapFromType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSaveOnChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceChangedBP OnResourceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CachedOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Amounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MaxAmounts;
    
    UIRRResourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SpendBatch(const TMap<FGameplayTag, int32>& Costs);
    
    UFUNCTION(BlueprintCallable)
    bool SpendAmount(FGameplayTag ResourceTag, int32 AmountToSpend);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAmount(FGameplayTag ResourceTag, int32 NewMaxAmount);
    
    UFUNCTION(BlueprintCallable)
    bool SaveToSlot();
    
    UFUNCTION(BlueprintCallable)
    void ResetAmounts();
    
    UFUNCTION(BlueprintCallable)
    bool LoadFromSlot(bool bBroadcastChanges);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughBatch(const TMap<FGameplayTag, int32>& Costs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnough(FGameplayTag ResourceTag, int32 Required) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmount(FGameplayTag ResourceTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmount(FGameplayTag ResourceTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAll(TArray<FIRRResourceSnapshot>& Out) const;
    
    UFUNCTION(BlueprintCallable)
    void AddAmount(FGameplayTag ResourceTag, int32 Delta, bool bClampToMaxCap);
    
};

