#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyOcean.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AWaterBodyOcean : public AWaterBody {
    GENERATED_BODY()
public:
    AWaterBodyOcean(const FObjectInitializer& ObjectInitializer);

};

