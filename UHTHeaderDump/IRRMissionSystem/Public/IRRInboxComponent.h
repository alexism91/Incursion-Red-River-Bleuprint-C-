#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRInboxItem.h"
#include "IRRProgressData.h"
#include "InboxUpdatedDelegate.h"
#include "RewardsReceivedDelegate.h"
#include "SelectedMessageUpdatedDelegate.h"
#include "IRRInboxComponent.generated.h"

class UIRRMissionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRInboxComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionComponent* MissionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRInboxItem> InboxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRInboxItem SelectedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchTerm;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInboxUpdated OnInboxUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectedMessageUpdated OnSelectedMessageUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRewardsReceived OnRewardsReceived;
    
    UIRRInboxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSelectedMessage(FIRRInboxItem Message);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSearchTerm(const FString& NewSearchTerm);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInbox();
    
    UFUNCTION(BlueprintCallable)
    void TryDeleteMessage(FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    void TryAddMessage(FIRRInboxItem Message);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveReward(FGuid UID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProgressDataUpdated(FIRRProgressData OutData);
    
    UFUNCTION(BlueprintCallable)
    void OnNewsDataReady(bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnreadMessages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClaimableReward(FGuid UID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReceiveReward(FGuid UID, FString& FailureMessage) const;
    
};

