#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=QuestFramework -ObjectName=QuestManagerAccess -FallbackName=QuestManagerAccess
#include "QuestGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class QUESTFRAMEWORKEXTENSION_API UQuestGameInstance : public UGameInstance, public IQuestManagerAccess {
    GENERATED_BODY()
public:
    UQuestGameInstance();


    // Fix for true pure virtual functions not being implemented
};

