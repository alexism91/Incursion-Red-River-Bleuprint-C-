#pragma once
#include "CoreMinimal.h"
#include "BaseMeshFromSplinesToolBuilder.h"
#include "RevolveSplineToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URevolveSplineToolBuilder : public UBaseMeshFromSplinesToolBuilder {
    GENERATED_BODY()
public:
    URevolveSplineToolBuilder();

};

