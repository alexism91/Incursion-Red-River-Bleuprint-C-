#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "EIRRAchievementProgressMode.h"
#include "IRRMissionEventPayload.h"
#include "IRRSteamAchievementData.h"
#include "IRRSteamAchievement.generated.h"

class UIRRTargetData;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRSteamAchievement : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatsAPIName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRSteamAchievementData> Data;
    
    UIRRSteamAchievement();

    UFUNCTION(BlueprintCallable)
    bool GetEventProgress(FGameplayTag MessageTag, UIRRTargetData* InTargetData, const FIRRMissionEventPayload& Payload, EIRRAchievementProgressMode& OutMode, int32& OutAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindMatchingData(FGameplayTag MessageTag, const UIRRTargetData* InTargetData, const FIRRMissionEventPayload& Payload) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Evaluate(FGameplayTag MessageTag, UIRRTargetData* InTargetData, FIRRMissionEventPayload Payload);
    
};

