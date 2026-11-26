#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=ContainerItem -FallbackName=ContainerItem
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=DefaultItem -FallbackName=DefaultItem
#include "EIRRRewardType.h"
#include "IRRLoyaltyByFaction.h"
#include "IRRRewardWidgetBase.generated.h"

class UInventoryComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRRewardWidgetBase : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem ItemReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultItem DefaultItemReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExperienceReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRLoyaltyByFaction FactionReward;
    
    UIRRRewardWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetupItemReward(UInventoryComponent* OwnerInventoryComp, FContainerItem InContainerItem);
    
    UFUNCTION(BlueprintCallable)
    void SetupFactionReward(FIRRLoyaltyByFaction InFactionReward);
    
    UFUNCTION(BlueprintCallable)
    void SetupExperienceReward(float InExperience);
    
    UFUNCTION(BlueprintCallable)
    void SetupDefaultItemReward(const FDefaultItem& InDefaultItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnRewardSetup(EIRRRewardType InRewardType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText FormatFactionValue(const FIRRLoyaltyByFaction& InFactionReward) const;
    
};

