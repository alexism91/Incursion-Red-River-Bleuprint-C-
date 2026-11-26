#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=QuestFramework -ObjectName=QuestComponentInterface -FallbackName=QuestComponentInterface
#include "QuestPlayerController.generated.h"

class UQuestComponent;
class UQuestTrackerComponent;

UCLASS(Blueprintable, NoExport)
class QUESTFRAMEWORKEXTENSION_API AQuestPlayerController : public APlayerController, public IQuestComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestFrameworkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestTrackerComponent* QuestTrackerComponent;
    
public:
    AQuestPlayerController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

