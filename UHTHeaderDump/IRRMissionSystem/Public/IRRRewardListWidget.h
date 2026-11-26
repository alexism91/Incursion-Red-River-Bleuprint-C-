#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=DefaultItem -FallbackName=DefaultItem
#include "IRRInboxItem.h"
#include "IRRLoyaltyByFaction.h"
#include "Templates/SubclassOf.h"
#include "IRRRewardListWidget.generated.h"

class UIRRMissionData;
class UIRRRewardWidgetBase;
class UInventoryComponent;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRRewardListWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* RewardContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIRRRewardWidgetBase> RewardEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnsPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRRewardWidgetBase*> RewardEntries;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* RewardInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RewardContainerUID;
    
public:
    UIRRRewardListWidget();

    UFUNCTION(BlueprintCallable)
    void PopulateRewards(const TArray<FDefaultItem>& Items, float Experience, const TArray<FIRRLoyaltyByFaction>& FactionRewards, int32 InColumnsPerRow);
    
    UFUNCTION(BlueprintCallable)
    void PopulateFromMission(UIRRMissionData* MissionData, int32 InColumnsPerRow);
    
    UFUNCTION(BlueprintCallable)
    void PopulateFromInboxItem(const FIRRInboxItem& InboxItem, int32 InColumnsPerRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnRewardsPopulated();
    
    UFUNCTION(BlueprintCallable)
    void ClearRewards();
    
};

