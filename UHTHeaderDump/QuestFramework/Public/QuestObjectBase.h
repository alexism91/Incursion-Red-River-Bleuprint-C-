#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QuestObjectBase.generated.h"

UCLASS(Abstract, Blueprintable)
class QUESTFRAMEWORK_API UQuestObjectBase : public UObject {
    GENERATED_BODY()
public:
    UQuestObjectBase();

};

