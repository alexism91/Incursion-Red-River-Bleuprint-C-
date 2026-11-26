#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyRiver.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AWaterBodyRiver : public AWaterBody {
    GENERATED_BODY()
public:
    AWaterBodyRiver(const FObjectInitializer& ObjectInitializer);

};

