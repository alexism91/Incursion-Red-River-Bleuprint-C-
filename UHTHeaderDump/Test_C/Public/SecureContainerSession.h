#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnSecureContainerSessionFeePaidDelegate.h"
#include "SecureContainerShippedItem.h"
#include "Templates/SubclassOf.h"
#include "SecureContainerSession.generated.h"

class ASecureContainer;
class UIRRAgentSetup;
class UInventoryComponent;
class UUserWidget;

UCLASS(Blueprintable, NoExport, NotPlaceable)
class TEST_C_API ASecureContainerSession : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecureContainerSessionFeePaid OnFeePaid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FeePaid, meta=(AllowPrivateAccess=true))
    bool bFeePaid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASecureContainer* OwningContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 FeeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag FeeItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InventoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName LootContentName;
    
public:
    ASecureContainerSession(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasShipped() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPayFee();
    
    UFUNCTION(BlueprintCallable)
    void PresentToPlayerInventory();
    
    UFUNCTION(BlueprintCallable)
    void PayFee();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FeePaid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyFeePaid();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeePaid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASecureContainer* GetOwningContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFeeItemTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFeeAmount() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyOpened();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDeliverInbox(const TArray<FSecureContainerShippedItem>& Items, const FString& Title, const FText& Body, const TSoftObjectPtr<UIRRAgentSetup>& Author);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPayFee() const;
    
};

