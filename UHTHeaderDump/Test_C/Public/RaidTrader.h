#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "InventoryInterface.h"
#include "OnRaidTradeExecutedDelegate.h"
#include "RaidTradeResult.h"
#include "RaidTraderPriceOverride.h"
#include "Templates/SubclassOf.h"
#include "RaidTrader.generated.h"

class AIRRBaseCharacter;
class APawn;
class APlayerController;
class ARaidTraderSession;
class UBillboardComponent;
class UIRRDefaultContainerSettings;
class UIRRItemsPreset;
class USceneComponent;
class UUserWidget;

UCLASS(Blueprintable, NoExport)
class TEST_C_API ARaidTrader : public AActor, public IInventoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeExecuted OnTradeExecuted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemsPreset* StockPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRDefaultContainerSettings* StockLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AcceptedPlayerItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRaidTraderPriceOverride> PriceOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TraderTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARaidTraderSession> SessionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerController*, ARaidTraderSession*> Sessions;
    
public:
    ARaidTrader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestOpen(APawn* InstigatorPawn, FName ContentName);
    
    UFUNCTION(BlueprintCallable)
    void OpenFromInteraction(AActor* InteractingActor, FName ContentName);
    
    UFUNCTION(BlueprintCallable)
    void OpenForPlayer(APawn* InstigatorPawn, FName ContentName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AIRRBaseCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTradeExecuted(APlayerController* Player, const FRaidTradeResult& Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaidTraderSession* GetSessionFor(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaidTraderSession* GetLocalSession() const;
    

    // Fix for true pure virtual functions not being implemented
};

