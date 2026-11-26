#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InventoryInterface.h"
#include "OnSecureContainerFeePaidDelegate.h"
#include "Templates/SubclassOf.h"
#include "SecureContainer.generated.h"

class APawn;
class APlayerController;
class ASecureContainerSession;
class UBillboardComponent;
class UIRRAgentSetup;
class UIRRDefaultContainerSettings;
class USceneComponent;
class UUserWidget;

UCLASS(Blueprintable, NoExport)
class TEST_C_API ASecureContainer : public AActor, public IInventoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecureContainerFeePaid OnFeePaid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FeeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FeeItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRDefaultContainerSettings* ContainerLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootContentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASecureContainerSession> SessionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InboxTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InboxBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRAgentSetup> InboxAuthor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerController*, ASecureContainerSession*> Sessions;
    
public:
    ASecureContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestOpen(APawn* InstigatorPawn, FName ContentName);
    
    UFUNCTION(BlueprintCallable)
    void PayFee();
    
    UFUNCTION(BlueprintCallable)
    void OpenFromInteraction(AActor* InteractingActor, FName ContentName);
    
    UFUNCTION(BlueprintCallable)
    void OpenForPlayer(APawn* InstigatorPawn, FName ContentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeePaid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASecureContainerSession* GetSessionFor(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASecureContainerSession* GetLocalSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFeeItemTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFeeAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPayFee() const;
    

    // Fix for true pure virtual functions not being implemented
};

