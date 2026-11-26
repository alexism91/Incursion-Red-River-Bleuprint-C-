#pragma once
#include "CoreMinimal.h"
#include "BaseMeshFromSplinesToolBuilder.h"
#include "TriangulateSplinesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTriangulateSplinesToolBuilder : public UBaseMeshFromSplinesToolBuilder {
    GENERATED_BODY()
public:
    UTriangulateSplinesToolBuilder();

};

