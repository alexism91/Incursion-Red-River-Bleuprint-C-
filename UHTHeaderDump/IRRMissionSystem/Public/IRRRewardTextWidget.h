#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=ContainerItem -FallbackName=ContainerItem
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=DefaultItem -FallbackName=DefaultItem
#include "IRRLoyaltyByFaction.h"
#include "IRRRewardWidgetBase.h"
#include "IRRRewardTextWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRRewardTextWidget : public UIRRRewardWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RewardLineText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemLineFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CashLineFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExperienceLineFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUppercaseItemNames;
    
    UIRRRewardTextWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText FormatItemLine(const FContainerItem& ContainerItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText FormatFactionLine(const FIRRLoyaltyByFaction& InFactionReward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText FormatExperienceLine(float Experience) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText FormatDefaultItemLine(const FDefaultItem& DefaultItem) const;
    
};

