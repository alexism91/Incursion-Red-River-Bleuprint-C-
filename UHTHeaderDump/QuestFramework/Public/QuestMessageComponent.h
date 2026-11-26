#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "QuestEventListenerDelegateDelegate.h"
#include "QuestEventPayload.h"
#include "QuestMessageInterface.h"
#include "QuestMessageComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class QUESTFRAMEWORK_API UQuestMessageComponent : public UActorComponent, public IQuestMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestEventListenerDelegate OnQuestMessage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MessagesToListen;
    
public:
    UQuestMessageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendQuestMessage(FGameplayTag MessageTag, FQuestEventPayload Payload, AActor* Recipient);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastQuestMessage(FGameplayTag MessageTag, FQuestEventPayload Payload);
    

    // Fix for true pure virtual functions not being implemented
};

