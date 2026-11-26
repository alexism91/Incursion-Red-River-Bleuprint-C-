#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "QuestFrameworkSubsystem.generated.h"

class UQuestManager;

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuestFrameworkSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestManager* QuestManager;
    
public:
    UQuestFrameworkSubsystem();

};

