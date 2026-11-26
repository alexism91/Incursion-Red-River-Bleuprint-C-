#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedToolBuilder -FallbackName=BaseCreateFromSelectedToolBuilder
#include "CutMeshWithMeshToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder {
    GENERATED_BODY()
public:
    UCutMeshWithMeshToolBuilder();

};

