#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyLake.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AWaterBodyLake : public AWaterBody {
    GENERATED_BODY()
public:
    AWaterBodyLake(const FObjectInitializer& ObjectInitializer);

};

