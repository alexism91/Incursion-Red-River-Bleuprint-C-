#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedToolBuilder -FallbackName=BaseCreateFromSelectedToolBuilder
#include "SelfUnionMeshesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder {
    GENERATED_BODY()
public:
    USelfUnionMeshesToolBuilder();

};

