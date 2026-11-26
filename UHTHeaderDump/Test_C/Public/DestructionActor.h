#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DestructionActor.generated.h"

class UIRRMissionEvent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API ADestructionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionEvent*> DeathEvents;
    
    ADestructionActor(const FObjectInitializer& ObjectInitializer);

};

