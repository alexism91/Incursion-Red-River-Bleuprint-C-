#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGExportableDataProvider.generated.h"

UCLASS(Abstract, Blueprintable)
class UPCGExportableDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPCGExportableDataProvider();

};

