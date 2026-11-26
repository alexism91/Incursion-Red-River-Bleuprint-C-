#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "QuestGameModeBase.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class QUESTFRAMEWORKEXTENSION_API AQuestGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AQuestGameModeBase(const FObjectInitializer& ObjectInitializer);

};

