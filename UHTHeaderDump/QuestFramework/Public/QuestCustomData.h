#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QuestCustomData.generated.h"

class UQuest;

UCLASS(Abstract, Blueprintable, Const, EditInlineNew)
class QUESTFRAMEWORK_API UQuestCustomData : public UObject {
    GENERATED_BODY()
public:
    UQuestCustomData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuest* GetQuestAsset() const;
    
};

