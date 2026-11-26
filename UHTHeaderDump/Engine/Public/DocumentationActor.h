#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "DocumentationActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ADocumentationActor : public AActor {
    GENERATED_BODY()
public:
    ADocumentationActor(const FObjectInitializer& ObjectInitializer);

};

