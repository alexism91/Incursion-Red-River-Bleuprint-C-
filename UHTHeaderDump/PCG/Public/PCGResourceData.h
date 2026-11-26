#pragma once
#include "CoreMinimal.h"
#include "PCGData.h"
#include "PCGResourceData.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGResourceData : public UPCGData {
    GENERATED_BODY()
public:
    UPCGResourceData();

};

