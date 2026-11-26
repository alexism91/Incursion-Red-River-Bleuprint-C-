#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRAIGroupAsyncPathRequest.h"
#include "IRRAIGroupData.h"
#include "IRRGroupDelegateDelegate.h"
#include "IRRGroupMemberDelegateDelegate.h"
#include "IRRAIGroupController.generated.h"

class AActor;
class UHTNComponent;
class UIRRAIBehaviorComponent;
class UIRRAIGroupComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRAIGroupController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupDelegate OnGroupEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIGroupData GroupData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupMemberDelegate OnMemberAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupMemberDelegate OnMemberRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupMemberDelegate OnMemberKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupMemberDelegate OnLeaderAssigned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGroupMemberDelegate OnLeaderKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHTNComponent* HTNComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIBehaviorComponent* BehaviorComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FIRRAIGroupAsyncPathRequest> AsyncPathRequests;
    
public:
    AIRRAIGroupController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RemoveMember(UIRRAIGroupComponent* InMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInGroup(const AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIBehaviorComponent* GetBehaviorComponent() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanMemberSpeak(FGameplayTag BarkTag, UIRRAIGroupComponent* GroupComp);
    
    UFUNCTION(BlueprintCallable)
    void AddMember(UIRRAIGroupComponent* InMember);
    
};

