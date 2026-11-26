#pragma once
#include "CoreMinimal.h"
#include "QuestAssetLibrary.h"
#include "QuestContextMessageListener.h"
#include "QuestMessageInterface.h"
#include "QuestObjectBase.h"
#include "QuestManager.generated.h"

class UObject;
class UQuestComponent;
class UQuestManager;
class UQuestMessageComponent;

UCLASS(Blueprintable, Config=Game)
class QUESTFRAMEWORK_API UQuestManager : public UQuestObjectBase, public IQuestMessageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UQuestComponent*> QuestComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UQuestMessageComponent*> MessageListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FQuestContextMessageListener> QuestContextMessageListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestAssetLibrary RuntimeQuestAssetLibrary;
    
public:
    UQuestManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UQuestManager* GetQuestManager(const UObject* WorldContext);
    

    // Fix for true pure virtual functions not being implemented
};

