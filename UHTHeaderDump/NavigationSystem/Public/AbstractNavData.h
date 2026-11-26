#pragma once
#include "CoreMinimal.h"
#include "NavigationData.h"
#include "AbstractNavData.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AAbstractNavData : public ANavigationData {
    GENERATED_BODY()
public:
    AAbstractNavData(const FObjectInitializer& ObjectInitializer);

};

