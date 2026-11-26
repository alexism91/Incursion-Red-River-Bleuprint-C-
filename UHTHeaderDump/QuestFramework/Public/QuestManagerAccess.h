#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "QuestManagerAccess.generated.h"

class UQuestManager;

UINTERFACE(Blueprintable, MinimalAPI)
class UQuestManagerAccess : public UInterface {
    GENERATED_BODY()
};

class IQuestManagerAccess : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RetainQuestManager(UQuestManager* Manager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UQuestManager* GetQuestManagerInstance() const;
    
};

